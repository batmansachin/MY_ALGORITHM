#include <bits/stdc++.h>
using namespace std;


int main(void){
	int t,n,p;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int arr[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		scanf("%d",&p);
		int count = 1;
		int c = 0;
		for(int i = 1;i<n;i++){
			c += (arr[i-1]-arr[i]);
		}
		cout<<(count+c)*p<<endl;
	}

	return 0;
}