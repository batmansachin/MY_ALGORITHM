#include <bits/stdc++.h>
using namespace std;


int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		int n = s.length();
		int arr[n];
		arr[0] = 0;
		int len = 0;
		for(int i = 1;i<n;){
			if(s[len]==s[i]){
				len++;
				arr[i++] = len;
			}
			else{
				if(len!=0){
					len = arr[len-1];
				}
				else{
					arr[i] = 0;
					i++;
				}
			}
		}
		cout<<arr[n-1]<<endl;
	}


	return 0;
}