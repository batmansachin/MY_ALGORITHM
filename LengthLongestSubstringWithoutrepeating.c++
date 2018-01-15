#include <bits/stdc++.h>
using namespace std;

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		int v[26] ;
		for(int i = 0;i<26;i++){
			v[i] = -1;
		}
		//v[s[0]-'a'] = 0;
		int n = s.length();
		int prev ;
		int currMax = 0;
		int ans = 0;
		for(int i = 0;i<n;i++){

			prev = v[s[i]-'a'];
			//cout<<prev<<endl;
			if(prev == -1 || i - currMax > prev){
				currMax++;
			}
			else{
				if(currMax > ans){
					ans = currMax;
				}
				currMax = i - prev;
			}
			//cout<<s[i]<<" "<<currMax<<endl;
			v[s[i]-'a'] = i;
		}
		if(currMax > ans){
					ans = currMax;
				}
		cout<<ans<<endl;

	}
	return 0;
}

