#include <bits/stdc++.h>
using namespace std;
unordered_map<int , int> m2;
m2.reserve(7000);
bool sortByValue(const pair<int , int >&a , const pair<int,int >&b ){
	if(a.second == b.second){
		return m2[a.first] < m2[b.first];
	}
	return a.second > b.second;
}

int main(void){
	int t ;
	scanf("%d",&t);
	while(t--){
		int n ;
		scanf("%d",&n);
		unordered_map<int, int> m;
		m.reserve(7000);
		vector < pair<int , int> > v;
		int p;
		//unordered_map <int , int> m;

		for(int i = 0;i<n;i++){
			scanf("%d",&p);
			//v.push_back(p);
			m[p]++;
			if(m2[p]==0){
				m2[p] = i+1;
			}
		}
		copy(m.begin(),m.end(),back_inserter(v));
		sort(v.begin(),v.end(),sortByValue);
		for(int i = 0;i<v.size();i++){
			for(int j = 0;j<v[i].second;j++){
				cout<<v[i].first<<" ";
			}
		}
		cout<<endl;

	}


	return 0;
}