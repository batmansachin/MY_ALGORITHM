#include <bits/stdc++.h>
using namespace std;

int main(void){
	
	
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int sum = 0;
		int step = 0;
		while(sum < n || (sum - n)%2!=0 ){
			step++
			sum += step;
			
		}
		cout<<step<<endl;
	}

	return 0;
}