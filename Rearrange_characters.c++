#include <bits/stdc++.h>
using namespace std;
struct key{
	int f ;
	char c;
	bool operator<(const key &k) const{
		return f < k.f;
	}
};
int main(void){

	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		int n = s.length();
		int count[26] = {0};
		for(int i = 0;i<n;i++){
			count[s[i]-'a']++;
		}
		priority_queue<key> pq;
		for(char c ='a';c<='z';c++){
			if(count[c-'a']){
				pq.push( key { count[c-'a'],c } );
			}
		}
		//cout<<endl;
		key prev {-1,'#'};
		string ans = "";
		
		while(!pq.empty()){
			key k = pq.top();
			pq.pop();
			ans = ans+k.c;
			k.f--;
			if(prev.f>=1){
				pq.push(prev);
			}
			//cout<<k.c;
			prev = k;
		}
		if(ans.length()==n){
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}

	}
	return 0;
}