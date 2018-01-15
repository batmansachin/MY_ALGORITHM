#include <bits/stdc++.h>
using namespace std;
int countFun(int p){
	int count = 0;
	while(p){
		if((p&1)==1)count++;
		p = p>>1;
	}
	return count;
}
int find(int n){
	for(int i =1;i<n;i++){
		if(i+countFun(i) == n)return 0;
	}

	return 1;
}

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		cout<<find(n)<<endl;
	}

	return 0;
}