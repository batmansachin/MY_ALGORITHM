#include <bits/stdc++.h>
using namespace std;


int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		for(int i = 0;i<n;i++){
			while(arr[i] > 0 && arr[i] <= n && arr[i]!=arr[arr[i]-1]){
				swap(arr[i],arr[arr[i]-1]);
			}
		}
		int i;
		for(i = 0;i<n;i++){
			if(arr[i]!=i+1)break;
		}
		cout<<(i+1)<<endl;
	}

	return 0;
}