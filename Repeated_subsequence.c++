#include <bits/stdc++.h>
#define MAX_CHAR 256
using namespace std;


bool isPalindrom(string s, int l,int h){
	while(l < h ){
		if(s[l++]!=s[h--])
			return false;
	}
	return true;
}

bool check(string s){
	int freq[MAX_CHAR] = {0};
	int n = s.length();
	//cout<<n<<" ";
	for(int i = 0;i<n;i++){
		freq[s[i]]++;
		//cout<<freq[s[i]]<<" ";
		if(freq[s[i]] > 3){
			
			return true;
		}
	}
	int k = 0;
	for(int i= 0;i<n;i++){
		if(freq[s[i]] > 1)
			s[k++] = s[i];
	}
	s[k] = '\0';
	if(isPalindrom(s,0,k-1)){
		if(k&1){
			return s[k/2] == s[k/2-1];

		}
		return false;
	}
	return true;
}

int main(void){
	string s;
	cout<<"Enter the String"<<endl;
	cin>>s;
	
	if(check(s)){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	cout<<endl;

	return 0;
}