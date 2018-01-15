#include <bits/stdc++.h>
using namespace std;

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n];
		int dp[n] = {0};
		for(int i = 0;i<n;i++){
			scanf("%d",&arr[i]);
			//dp[i] = arr[i];
		}
		
		for(int i = 0;i<n;i++){
			dp[i] += arr[i];
			for(int j = i+1;j<n;j++){
				if(arr[j] > arr[i]){
					dp[j] += arr[i];
				}
			}
		}
		for(int i = 0;i<n;i++){
			cout<<dp[i]<<" ";
		}
		cout<<endl;
		int ans = INT_MIN;
		for(int i = 0;i<n;i++){
			ans = max(ans,dp[i]);
		}
		cout<<ans<<endl;
	}

	return 0;
}