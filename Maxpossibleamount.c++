#include <bits/stdc++.h>
using namespace std;

int optimal(int *a,int l,int r){
	if(a[l]+a[r-1] >= a[r]+a[l+1]){
		return l;
	}
	return r;
}

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		int l = 0;
		int r = n-1;
		int ans = 0;
		while(l<=r){
			int x = optimal(arr,l,r);
			if(x==l){
				
				ans += arr[l++];
			}
			else if(x==r){
				ans += arr[r--];
			}
			if(l==r)break;
			x = optimal(arr,l,r);
			if(x==l){
				l++;
			}
			else if(x == r){
				r--;
			}
		}
		cout<<ans<<endl;

	}

	return 0;
}