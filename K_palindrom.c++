#include <bits/stdc++.h>
using namespace std;

bool is_k_palin(string str1,int k)
{
    string str2 = str1;
    reverse(str2.begin(),str2.end());
    int len = str1.length();
    int dp[len+1][len+1];
	//memset(dp,0,sizeof(dp));
	for(int i =0;i<=len;i++){
		for(int j = 0 ;j<=len;j++){
			if(j==0){
				dp[i][j] = i;
			}
			else if(i == 0){
				dp[i][j] = j;
			}
			else if(str1[i-1] == str2[j-1]){
				dp[i][j] = dp[i-1][j-1];
				//cout<<"1 ";
			}
			else{
				dp[i][j] = 1+ min(dp[i-1][j] , dp[i][j-1]);
				//cout<<"p "<<endl;
			}
		}
	}
	if(dp[len][len] <= 2*k){
	    return true;
	}
	else{
	    return false;
	}
}
int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		int k ;
		cin>>k;
		int len = s.length();
		if(is_k_palin(s,k)==true){
			printf("1\n");
		}
		else{
			printf("0\n");
		}

	}


	return 0;
}