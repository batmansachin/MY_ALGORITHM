#include <bits/stdc++.h>
using namespace std;

int findpivot(int a,int b,int c){
	//cout<<2<<" ";
	if(a > b){
		if(c > a)return a;
		if(c > b) return c;
		else return b;
	}
	else{
		if(c > b) return b;
		if(c > a) return c;
		else return a;
	}
}

void find(int arr[],int l,int r,int target){
	//cout<<1<<" ";
	if(l>=r)return;
	int mid = (l+r)>>1;
	int pivot = findpivot(arr[mid],arr[l],arr[r]);
	int i = l;
	int j = r;
	while(i<=r){
		while(arr[i] < pivot)i++;
		while(arr[j] > pivot)j--;
		if(i<=j){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}

	}
	if(target <= (i-1)){
		find(arr,0,i-1,target);
	}
	else{
		find(arr,i,r,target);
	}
}

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		
		int k;
		//cout<<"Enter the Value of k";
		cin>>k;
		//cout<<k<<endl;
		find(arr,0,n-1,k);
		cout<<arr[n-k]<<endl;
	}

	return 0;
}