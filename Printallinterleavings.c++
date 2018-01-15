#include <bits/stdc++.h>
using namespace std;

void printInterl(string s,string s1,char *str,int n,int m,int start1,int start2,int i){
	if(n==0 && m==0){
		cout<<str<<endl;
	}
	if(n!=0){
		str[i] = s[start1];
		printInterl(s,s1,str,n-1,m,start1+1,start2,i+1);
	}
	if(m!=0){
		str[i] = s1[start2];
		printInterl(s,s1,str,n,m-1,start1,start2+1,i+1);
	}
}

int main(void){

	int t;
	scanf("%d",&t);
	while(t--){
		string s,s1;
		cin>>s>>s1;
		int n = s.length();
		int m = s1.length();
		char str[n+m];
		printInterl(s,s1,str,n,m,0,0,0);

	}
	return 0;
}