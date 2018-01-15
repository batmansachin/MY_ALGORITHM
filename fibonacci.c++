#include <bits/stdc++.h>
using namespace std;


int main(void){
	int n;
	scanf("%d",&n);
	n--;
	int f[2][2] = {{1,1},{1,0}};
	int m[2][2] = {{1,1},{1,0}};
	int g[2][2] = {{1,1},{1,0}};
	int a,b,c,d;
	int c1 = 0;
	while(n){
		if( n%2==1){
			if(c1==0){
				c1 = 1;
				for(int i = 0;i<2;i++){
					for(int j = 0;j<2;j++){
						m[i][j] = f[i][j];
					}
				}
			}
			else{
			a = m[0][0]*f[0][0] + m[0][1]*f[1][0];
			b = m[0][0]*f[0][1] + m[0][1]*f[1][1];
			c = m[1][0]*f[0][0] + m[1][1]*f[1][0];
			d = m[1][0]*f[0][1] + m[1][1]*f[1][1];
			m[0][0] = a;
			m[0][1] = b;
			m[1][0] = c;
			m[1][1] = d;
			}
		}
		
			a = f[0][0]*f[0][0] + f[0][1]*f[1][0];
			b = f[0][0]*f[0][1] + f[0][1]*f[1][1];
			c = f[1][0]*f[0][0] + f[1][1]*f[1][0];
			d = f[1][0]*f[0][1] + f[1][1]*f[1][1];
			f[0][0] = a;
			f[0][1] = b;
			f[1][0] = c;
			f[1][1] = d;
		
		/*for(int i = 0;i<2;i++){
			for(int j = 0;j<2;j++){
				cout<<f[i][j]<<" ";
			}
			cout<<endl;
		}*/
		n >>= 1;
		//if(n==1)break;
	}
	cout<<m[0][0]<<endl;

	return 0;
}