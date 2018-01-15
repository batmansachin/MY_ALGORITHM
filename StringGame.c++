#include <bits/stdc++.h>
using namespace std;


int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		int k;
		cin>>k;
		int dp[26] = {0};
		int n =s.length();
		for(int i = 0;i<n;i++){
			dp[s[i]-'a']++;
		}
		priority_queue<int> pq;
		for(int i = 0;i<26;i++){
			if(dp[i]){
				pq.push(dp[i]);
			}
		}
		while(k-- && !pq.empty()){
			int x = pq.top()-1;
			pq.pop();
			pq.push(x);
		}
		int ans =  0;
		while(!pq.empty()){
			int x = pq.top();
			pq.pop();
			ans += (x*x);
		}
		cout<<ans<<endl;
	}


	return 0;
}