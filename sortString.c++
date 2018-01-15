#include <bits/stdc++.h>
using namespace std;


int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		string pat;
		cin>>s>>pat;
		int dp[256] = {0};
		int n = pat.length();
		for(int i = 0;i<n;i++){
			dp[pat[i]]++;
		}
		int l = 0;
		int end = 0;
		int count = n;
		n = s.length();
		int result = 0;
		while(end < n){
			if(dp[s[end++]]-->=1){
				count--;
			}
			if(count==0){
				result++;
			}
			if(end-l == pat.length() && dp[s[l++]]++>=0)count++;
		}
		cout<<result<<endl;
	}

	return 0;
}