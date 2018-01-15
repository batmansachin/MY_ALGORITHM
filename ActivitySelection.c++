#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int> &a ,const pair<int,int> &b){
	return a.second < b.second;
}
int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		int b[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		for(int i = 0;i<n;i++){
			cin>>b[i];
		}
		vector <pair<int,int> > v;
		for(int i = 0;i<n;i++){
			v.push_back(make_pair(a[i],b[i]));
		}
		sort(v.begin(),v.end(),cmp);
		   
		
		int i = 0;
		int count = 1;
		for(int j = 1;j<n;j++){
			//cout<<1<<" ";
			if(v[i].second <= v[j].first){
				count++;
				i = j;
			}
		}
		cout<<count<<endl;
	}


	return 0;
}