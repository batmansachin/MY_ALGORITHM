#include <bits/stdc++.h>
using namespace std;

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[203] ={0};
		int a[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&a[i]);
			arr[a[i]+100]++;
		}
		int i;
		for(i= 0;i<n;i++){
			if(arr[a[i]+100]==1)break;
		}
		if(i==n)cout<<0<<endl;
		else cout<<a[i]<<endl;
	}

	return 0;
}