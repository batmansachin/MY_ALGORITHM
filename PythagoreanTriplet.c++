#include <bits/stdc++.h>
using namespace std;


int main(void){
	int t;
	scanf("%d",&t);
	int n;

	while(t--){
		scanf("%d",&n);
		int arr[n];
		int p;
		for(int i = 0;i<n;i++){
			scanf("%d",&p);
			arr[i] = p*p;
		}
		sort(arr,arr+n);
		int l ,r;
		int f = 0;
		for(int i = n-1;i>=0;i--){
			l = 0;
			r = i-1;
			while(l < r){
				if(arr[i] == arr[l]+arr[r]){
					f = 1;
					//cout<<"1 ";
					break;
				}
				else if(arr[i] < arr[l]+arr[r]){
					r--;
				}
				else{
					l++;
				}
			}
			if(f==1)
				break;
			
		}
		if(f){
				printf("Yes\n");
			}
			else{
				printf("No\n");
			}

	}

	return 0;
} 