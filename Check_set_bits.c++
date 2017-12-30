#include <bits/stdc++.h>
using namespace std;

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int res = 0;
		int a;
		for(int i = 0;i<n;i++){
			scanf("%d",&a);
			res ^= a;
		}
		if(n&1==0){
			printf("0\n");
		}
		else{
			printf("%d\n",res);
		}
		
	}
}