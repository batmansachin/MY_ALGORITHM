#include <bits/stdc++.h>
using namespace std;

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int dp[4][4];
		int n = 4;
		for(int i = 0;i<4;i++){
			if(i%2 ==0){
				for(int j = 0;j<4;j++){
					scanf("%d",&dp[i][j]);
				}
			}
			else{
				for(int j = 3;j>=0;j--){
					scanf("%d",&dp[i][j]);
				}
			}
		}
		for(int i = 0;i<4;i++){
			for(int j =0;j<4;j++){
				cout<<dp[i][j]<<" ";
			}
			//cout<<endl;
		}
		cout<<endl;
	}
}