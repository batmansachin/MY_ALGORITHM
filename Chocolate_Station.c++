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
		int ans = 1;
		int count = 0;
		int c = 0;
		for(int i = 1;i<n;i++){
			count = (arr[i-1]-arr[i])
			if(count <= 0){
				ans += (1 - count);
				count = 1;
			}
			
		}
		if(count<0){
			ans += count;
		}
		cout<<(ans)*p<<endl;
	}

	return 0;
}