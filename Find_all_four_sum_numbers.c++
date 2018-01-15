#include <bits/stdc++.h>
using namespace std;

int main(void){

	int t;
	scanf("%d",&t);
	while(t--){
		int n,x;
		scanf("%d%d",&n,&x);
		int arr[n];
		for(int i =0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		sort(arr,arr+n);
		for(int i =0;i<n-3;i++){
			for(int j =i+1;j<n-2;j++){
				int k = j+1;
				int r = n-1;
				while(k<r){
					if(arr[i]+arr[j]+arr[k]+arr[r]==x){
						cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[r]<<" $";
						k++;
						r--;
					}
					else if(arr[i]+arr[j]+arr[k]+arr[r]<x){
						k++;
					}
					else{
						r--;
					}
				}
			}
		}
		cout<<endl;

	}
	return 0;
}