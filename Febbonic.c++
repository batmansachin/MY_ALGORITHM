#include <bits/stdc++.h>
using namespace std;
int f[2][2] = {{1,1},{1,0}};
int m[2][2] = {{1,1},{1,0}};
int a[2][2];
int main(void){
	int ch = 1;

	while(ch){
		for(int i = 0;i<2;i++){
			for(int j = 0;j<2;j++){
				for(int k = 0;k<2;k++){
					a[i][j] += f[i][k]*m[k][j];
				}
			}
		}
		for(int i = 0;i<2;i++){
			for(int j = 0;j<2;j++){
				f[i][j] = a[i][j];
				a[i][i] = 0;
			}
		}
		cout<<f[0][0]<<endl;
		cout<<"Do u want to continue 1.yes"<<endl;
		cin>>ch;
	}
	return 0;
}