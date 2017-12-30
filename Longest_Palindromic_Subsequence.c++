#include <bits/stdc++.h>
using namespace std;

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		int n = s.length();
		cout<<n<<endl;
		int dp[n][n];
		for(int i = 0;i<n;i++)
			dp[i][i] = 1;
		for(int l = 2;l<=n;l++){
			for(int i = 0;i<n-l+1;i++){
				int j = l-i-1;
				if(s[i]==s[j] && l==2){
					dp[i][j] = 2;
				}
				else if(s[i] == s[j]){
					dp[i][j] = dp[i+1][j-1]+2;
				}
				else{
					dp[i][j] = max(dp[i+1][j],dp[i][j-1]);
				}
			}
		}
		printf("%d\n",dp[0][n-1]);
	}
}