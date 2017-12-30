#include <bits/stdc++.h>
using namespace std;

bool myCom(string x, string y){
	string xy = x.append(y);
	string yx = y.append(x);

	return xy.compare(yx) > 0 ? 1:0;
}

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		vector<string> v;
		string p;
		for(int i = 0;i<n;i++){
			cin>>p;
			
			v.push_back(p);
		}
		sort(v.begin(),v.end(),myCom);
		for(int i = 0;i<n;i++){
			cout<<v[i];
		}
		cout<<endl;
	}
	return 0;
}