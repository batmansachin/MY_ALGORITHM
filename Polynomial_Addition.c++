#include <bits/stdc++.h>
using namespace std;

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int arr[1003]={0};
		int n,m;
		cin>>n;
		int x,y;
		for(int i =0;i<n;i++){
			cin>>x>>y;
			arr[y] += x;
		}
		cin>>m;
		for(int i =0;i<n;i++){
			cin>>x>>y;
			arr[y] += x;
		}
		int k =0;
		for(int i = 1000;i>=0;i--){
			if(arr[i]!=0){
				if(k==0){
					cout<<arr[i]<<"x^"<<i<<" ";
					k++;
				}
				else{
					cout<<"+ "<<arr[i]<<"x^"<<i<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}