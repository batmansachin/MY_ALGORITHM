#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	int t;
	scanf("%d",&t);
	while(t--){
	int n,x;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	for(int i =0;i<n;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	int i =0;
	int j =0;
	int ans = 0;
	int count  = 0;
	while(i <n && j <n){
		if(a[i]<b[j]){
			count++;
			i++;
			if(count > ans){
			ans = count;}
		}
		else{
			j++;
			count--;
		}
	}
	cout<<ans<<endl;
		

	}
	return 0;
}