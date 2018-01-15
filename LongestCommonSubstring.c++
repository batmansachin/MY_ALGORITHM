#include <bits/stdc++.h>
using namespace std;


int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		string s,s2;
		cin>>s>>s2;
		int dp[n+1][m+1];
		int ans = 0;
		for(int i = 0;i<=n;i++){
			for(int j = 0;j<=m;j++){
				if(i==0 ||j==0){
					dp[i][j] = 0;

				}
				else if(s[i-1]) == s2[j-1]{
					dp[i][j] = dp[i-1][j-1]+1;
					ans = max(ans,dp[i][j]);

				}
				else{
					dp[i][j] = 0;
				}
			}
		} 
		cout<<ans<<endl;
	}

	return 0;
}