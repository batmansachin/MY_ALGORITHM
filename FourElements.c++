#include <bits/stdc++.h>
using namespace std;

struct pairSum{
	int first;
	int second;
	int sum;
};

bool cmp(pairSum a, pairSum b){
	return a.sum < b.sum;
}
bool Nocommon(pairSum a, pairSum b){
	if (a.first == b.first || a.first == b.second ||
            a.second == b.first || a.second == b.second)
        return false;
    return true;
}

int main(void){

	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		//cout<<n<<" n value"<<endl;
		int arr[n];
		for(int i = 0;i<n;i++){
			//scanf("%d",&arr[i]);
			//cout<<"1--"<<endl;
			cin>>arr[i];
		}
		
		
		int n1 = n*(n-1);
		n1 /= 2;
		pairSum dp[n1];
		int k = 0;
		for(int i = 0;i<n-1;i++){
			for(int j = i+1;j<n;j++){
				dp[k].sum = arr[i]+arr[j];
				dp[k].first = i;
				dp[k].second = j;
				k++;
			}
		}
		int x;
		cin>>x;
		n = n1;
		sort(dp,dp+n,cmp);
		for(int i = 0;i<n;i++){
			cout<<dp[i].sum<<" ";
		}
		cout<<endl;
		int l = 0;
		int r = n-1;
		int f = 0;
		while(l<n && r>=0){
			if(dp[l].sum+dp[r].sum==x && Nocommon(dp[l],dp[r])){
				f = 1;
				break;
			}
			else if(dp[l].sum+dp[r].sum< x){
				l++;
			}
			else{
				r--;
			}
		}
		if(f==1){
			cout<<"1"<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
	}

	return 0;
}
