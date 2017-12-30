#include <bits/stdc++.h>
using namespace std;


int main(void){
	int t;
	scanf("%d",&t);
	int n,x,y;
	vector<int> v,v1;
	int a;
	
	while(t--){
		long sum = 0;
		long s =0;
		scanf("%d%d%d",&n,&x,&y);
		for(int i = 0;i<n;i++){
			scanf("%d",&a);
			v.push_back(a);
		}
		for(int i = 0;i<n;i++){
			scanf("%d",&a);
			v1.push_back(a);
		}

		vector <int> v2,v3;
		s = 0;
		for(int i = 0;i<n;i++){
			if(v[i] == v1[i])
				s += v[i];
			else if(v[i] > v1[i]){
				v2.push_back(v[i]);
			}
			else{
				v3.push_back(v1[i]);
			}
		}
		sort(v2.begin(),v2.end());
		sort(v3.begin(),v3.end());
		int l = v2.size()-1;
		int r = v3.size()-1;
		for(int i = l;i>=0 && x >=0;i--){
			x--;
			sum += v2[i];
		}
		for(int i = r ;i >= 0 && y >= 0 ; i--){
			y--;
			sum += v3[i];
		}
		sum += s;
		cout<<s<<endl;
		cout<<sum<<endl;

	}

	return 0;
}