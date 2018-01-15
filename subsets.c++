#include <bits/stdc++.h>
using namespace std;
int f = 0;

void backTracking(vector<int> A,int start,int end,vector<int> &v1,int sum){
	if(sum == 0){
		f = 1;
		cout<<"(";
		for(int i = 0;i<v1.size();i++){
			if(i==0){
				cout<<v1[i];
			}
			else{
				cout<<" "<<v1[i];
			}
		}
		cout<<")";
	}
	for(int i = start;i<=end && sum >= A[i];i++){
		if(i==start ||  A[i]!=A[i-1]){
			v1.push_back(A[i]);
			backTracking(A,i+1,end,v1,sum - A[i]);
			v1.pop_back();
		}
	}
}

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		f = 0;
		int n;
		cin>>n;
		vector<int> v;
		int a;
		for(int i = 0;i<n;i++){
			cin>>a;
			v.push_back(a);
		}
		int sum ;
		cin>>sum;
		sort(v.begin(),v.end());
		
		vector<int> v1;

		backTracking(v,0,n-1,v1,sum);
		if(f=0){
			cout<<"Empty";
		}
		cout<<endl;
	}

	return 0;
}