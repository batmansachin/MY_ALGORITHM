#include <bits/stdc++.h>
using namespace std;


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
		int a = INT_MIN;
		int b = INT_MIN;
		for(int i = 0;i<n;i++){
			if(arr[i] >= a){
				b = a;
				a = arr[i];
			}
			else if(arr[i] >= b){
				b = arr[i];
			}
		}
		cout<<b<<endl;
	}
}