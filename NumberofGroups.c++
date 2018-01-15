#include <bits/stdc++.h>
using namespace std;

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a;
		int c[n] = {0};
		for(int i = 0;i<n;i++){
			scanf("%d",&a);
			c[a%3]++;
		}
		int ans = 0;
		ans += (c[0]*(c[0]-1))>>1;
		ans += (c[1]*c[2]);
		ans += (c[0]*(c[0]-1)*(c[0]-2))/6;
		ans +=  (c[1]*(c[1]-1)*(c[1]-2))/6;
		ans +=  (c[2]*(c[2]-1)*(c[2]-2))/6;
		ans += c[0]*c[1]*c[2];
		cout<<ans<<endl;
	}

	return 0;
}