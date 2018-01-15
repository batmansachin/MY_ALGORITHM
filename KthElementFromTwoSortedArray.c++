#include <bits/stdc++.h>
using namespace std;

int findKthElement(int a[],int start1,int end1,int b[],int start2,int end2,int k){
	//cout<<"1 ";
	if(start1 >= end1)return b[start2+k-1];
	if(start2 >= end2)return a[start1+k-1];
	if(k==1)return min(a[start1],b[start2]);
	int aMax = INT_MAX;
	int bMax = INT_MAX;
	if(start1+k/2-1 < end1) aMax = a[start1 + k/2 - 1];
	if(start2+k/2-1 < end2) bMax = b[start2 + k/2 - 1];
	//cout<<aMax<<" "<<bMax<<endl;
	if(aMax > bMax){
		return findKthElement(a,start1,end1,b,start2+k/2,end2,k-k/2);
	}
	else{
		return findKthElement(a,start1 + k/2,end1,b,start2,end2,k-k/2);
	}
}

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,k;
		cout<<"Enter the size of 1st Array"<<endl;
		cin>>n;
		int arr[n];
		cout<<"Enter the Element of 1st Array"<<endl;
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		cout<<"Enter the size of 2nd Array"<<endl;
		cin>>m;
		int arr1[m];
		cout<<"Enter the Element of 2nd Array"<<endl;
		for(int i = 0;i<m;i++){
			cin>>arr1[i];
		}
		cout<<"Enter The Value of K";
		cin>>k;
		sort(arr,arr+n);
		sort(arr1,arr1+m);
		cout<<findKthElement(arr,0,n,arr1,0,m,k)<<endl;
	}

	return 0;
}