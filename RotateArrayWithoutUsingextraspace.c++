#include <bits/stdc++.h>
using namespace std;

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n][n];
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				scanf("%d",&arr[i][j]);
			}
		}
		for(int i = 0;i<n;i++){
			for(int j = i;j<n;j++){
				if(i==j)continue;
				arr[i][j] = arr[i][j] ^ arr[j][i];
				arr[j][i] = arr[i][j] ^ arr[j][i];
				arr[i][j] = arr[i][j] ^ arr[j][i];
			}
		}
		int k = 0;
		//int n--;
		int m = n-1;
		while(k<m){
			for(int j = 0;j<n;j++){
				arr[j][k] = arr[j][k]^arr[j][m];
				arr[j][m] = arr[j][k]^arr[j][m];
				arr[j][k] = arr[j][k]^arr[j][m];
			}
			k++;
			m--;
		}
		for(int i = 0 ;i<n;i++){
			for(int j = 0;j<n;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}