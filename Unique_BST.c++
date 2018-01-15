#include <bits/stdc++.h>
using namespace std;


int main(void){
	int dp[15] = {0};
	dp[1] = 1;
	dp[0] = 1;
	for(int i = 2;i<15;i++){
		for(int j = 0;j<i;j++){
			dp[i] += dp[j]*dp[i-j-1];
		}
	}
	int t;
	scanf("%d",&t);
	while(t--){
	int n;
	scanf("%d",&n);
	cout<<dp[n]<<endl;

		

	}
	return 0;
}