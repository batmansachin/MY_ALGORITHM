#include <bits/stdc++.h>
using namespace std;
int arr[1002];
int no_ans = 0;
int n = 1000;
int ans[1002] ;
int k = 0;

int find_ind(int l,int r,int x){
	int index = -1; 
	for(int i = l;i<=r;i++){
		if(x<arr[i]){
			index = i;
			break;
		}
	}
	if(index == -1)return index;
	for(int i =l+1;i<index;i++){
		if(arr[i] > x){
			no_ans = 1;
			return index;
		}
	}
	for(int i = index;i<=r;i++){
		if(arr[i]<x){
			no_ans = 1;
			return index;
		}
	}
	return index;

}

void postorder(int l ,int r){
	
	if(l < 0 || r >= n || l >r ) return;
	ans[k++] = arr[l];
	if(l==r) return;
	int index = find_ind(l+1,r,arr[l]);
	if(no_ans){
		return;
	}
	if(index!=-1){
		postorder(index,r);
		postorder(l+1,index-1);
	}
	else{
		postorder(l+1,r);
	}
}

int main(void){
	
	int t;
	scanf("%d",&t);
	while(t--){
		no_ans = 0;
		int n ;
		scanf("%d",&n);
		
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		postorder(0,n-1);
		if(no_ans){
			cout<<"NO"<<endl;
		}
		else{
			
			for(int i =n-1;i>=0;i--){
				cout<<ans[i]<<" ";
			}
			cout<<endl;
		}
	}
		
	return 0;
}