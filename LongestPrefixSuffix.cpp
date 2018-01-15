#include <bits/stdc++.h>
using namespace std;


int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		int n = s.length();
		//int j = 1;
		int i =0;
		for(i = 0;i<n;i++){
			if(s.substr(0,n-i-1)==s.substr(i+1,n)){
				break;
			}
		}
		cout<<(n-i-1)<<endl;
	}

	return 0;
}