#include <bits/stdc++.h>
using namespace std;


int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int graph[n][n];
		for(int i =0;i<n;i++){
			for(int j =0;j<n;j++){
				scanf("%d",&graph[i][j]);
			}
		}
		vector<int> v;
		int s = 0;
		for(int i =0;i<n;i++){
			if(i!=s){
				v.push_back(i);
			}
		}
		int ans = INT_MAX;
		do{
			int current_pathsum = 0;
			int k = s;
			for(int i = 0;i<v.size();i++){
				current_pathsum += graph[k][v[i]];
				k = v[i];
			}
			current_pathsum += graph[k][s];
			ans = min(ans,current_pathsum);
		}while(next_permutation(v.begin(),v.end()));
		cout<<ans<<endl;
	}
}