#include <bits/stdc++.h>
using namespace std;


void update(int bit[],int n,int index,int val){
	index++;
	while(index <=n){
		bit[index] = min(bit[index], val);
		index += (index &-index);
	}
}

int main(void){
	int n;
	cout<<"Enter the Number of Element\n";
	cin>>n;
	cout<<"Enter the Element of Array:-\n";
	int a[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];

	}
	int bit[n+1];
	for(int i = 0;i<=n;i++)
		bit[i] = 0;
	for(int i = 0;i<n;i++){
		update(bit,n,i,a);
	}
	for(int i = 0;i<=n;i++){
		cout<<bit[i]<<" ";
	}
	cout<<endl;

	return 0;
}