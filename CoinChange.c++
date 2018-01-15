#include <bits/stdc++.h>
using namespace std;


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

		int x;
		cin>>x;
		//cout<<"X value is :- "<<x<<endl;
		int dp[x+1]={0};
		for(int i = 0;i<n;i++){
			for(int j = arr[i];j<=x;j++){
				dp[j] += dp[j-arr[i]];
			}
		}
		cout<<dp[x]<<endl;
	}

	return 0;
}