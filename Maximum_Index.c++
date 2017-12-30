#include <bits/stdc++.h>
using namespace std;


int main(void){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int arr[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		int larr[n],rarr[n];
		larr[0] = arr[0];
		rarr[n-1] = arr[n-1];
		for(int i = 1;i<n;i++){
			larr[i] = min(larr[i-1],arr[i]);
		}
		for(int i = n-2;i>=0;i--){
			rarr[i] = max(rarr[i+1],arr[i]);
		}
		int l = 0;
		int r = 0;
		int maxDiff = -1;
		while(l < n && r < n){
			if(larr[l] <= rarr[r]){
				maxDiff = max(maxDiff,r-l);
				r++;
			}
			else{
				l++;
			}
		}
		printf("%d\n",maxDiff);
	}
}