#include <bits/stdc++.h>
using namespace std;

//int MAX = 1008;
bool fibo[1008];
void sieve(void){
	int a = 0;
	int b = 1;
	fibo[b] = true;
	fibo[a] = true;
	//cout<<fibo[5]<<endl;
	int c=0;
	while(c <= 1000){
		c = a+b;
		a = b;
		b = c;
		fibo[c] = true;
	}
}


int main(void){
	sieve();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<n;i++){
			if(fibo[arr[i]]==true){
				printf("%d ",arr[i]);
			}
		}
		printf("\n");
	}
	return 0;
}