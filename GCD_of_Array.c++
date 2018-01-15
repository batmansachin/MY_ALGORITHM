#include <bits/stdc++.h>
using namespace std;

int main(void){
	int  t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		sort(arr,arr+n);
		int ans = 0;
		for(int i = 0;i<n;i++){
			ans += i+arr[i];
		}
		cout<<ans<<endl;
		
	}

	return 0;
}