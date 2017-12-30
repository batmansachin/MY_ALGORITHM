#include <bits/stdc++.h>
using namespace std;


int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,sum;

		scanf("%d%d",&n,&sum);
		int arr[n];
		for(int i = 0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		int cur_sum = arr[0];
		int start = 0;
		for(int i = 1;i<=n;i++){
			while(cur_sum > sum ){
				cur_sum -= arr[start++];
				//start++;
			}
			if(cur_sum == sum){
				printf("%d %d",(start+1),i);
				break;
			}
			if(cur_sum < sum && i < n)
				cur_sum += arr[i];
		}

	}


	return 0;
}