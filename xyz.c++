#include <bits/stdc++.h>
using namespace std;
bool prime[100003];
void sieve(){
	prime[0] = 1;
	prime[1] = 1;
	for(int i = 2;i<=100000;i++){
		if(prime[i]==0){
			for(int j = i*2;j<=100000;j+=i){
				prime[j] = 1;
			}
		}
	}

}

int main(void){
	sieve();
	int t,n;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		for(int i = a;i<=b;i++){
			if(!prime[i]){
				cout<<i<<" ";
			}
		}
		cout<<endl;
		
	}

	return 0;
}