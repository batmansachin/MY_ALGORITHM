#include <bits/stdc++.h>
using namespace std;


int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n];
		int sum = 0;
		for(int i = 0;i<n;i++){
			scanf("%d",&arr[i]);
			sum += arr[i];
		}
		if((sum&1)==1){
			cout<<"NO"<<endl;
			continue;
		}
		sum = sum/2;
		bool dp[sum/2+1][n+1];
		for(int i = 0;i<=n;i++){
			dp[0][i] = true;
		}
		for(int i = 1;i<=sum;i++){
			dp[i][0] = false;
		}
		for(int i = 1;i<=sum;i++){
			for(int j = 1;j<=n;j++){
				dp[i][j] = dp[i][j-1];
				if(i >= arr[j-1]){
					dp[i][j] = dp[i][j] || dp[i-arr[j-1]][j-1];
				}
			}
		}
		if(dp[sum][n]==true){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}