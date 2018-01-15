#include <bits/stdc++.h>
using namespace std;

int kedens(int arr[],int n){
	int sum = 0,maxSum = INT_MIN;
	int end = -1;
	for(int i = 0;i<n;i++){
		sum += arr[i];
		if(sum < 0){
			sum = 0;
			
		}
		else if(sum > maxSum){
			end = i;
			maxSum = sum;
		}
	}
	if(end!=-1){
		return maxSum;
	}
	maxSum = arr[0];
	
	for(int i =1;i<n;i++){
		if(maxSum < arr[i]){
			
		}
	}
	return maxSum;
}

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		int arr[n][m];
		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				scanf("%d",&arr[i][j]);
			}
		}
		int maxSum = INT_MIN , finalLeft,finalRight,finalTop,finalBottom,sum;

		int temp[m],start,end;
		for(int i = 0;i<n;i++){
			memset(temp,0,sizeof(temp));
			for(int j = i;j<n;j++){
				for(int k = 0;k<m;k++){
					temp[k] += arr[j][k];
				}
				sum = kedens(temp,m);
				if(sum > maxSum){
					maxSum = sum;
					
				}
			}
		}
		cout<<maxSum<<endl;
	}

	return 0;
}