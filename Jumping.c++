#include <bits/stdc++.h>
using namespace std;

void bfs(int x,int num){
	queue<int> q;
	q.push(num);

	while(!q.empty()){
		num = q.front();
		q.pop();
		if(num <= x){
			cout<<num<<" ";
			int last_digit = num%10;
			if(last_digit == 0){
				q.push(num*10 + last_digit+1);
			}
			else if(last_digit == 9){
				q.push(num*10 + last_digit -1);
			}
			else{
				q.push(num*10 + last_digit-1);
				q.push(num*10 + last_digit+1);
			}
		}
	}
}

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("0 ");
		for(int i = 1;i<=9 && i <=n;i++){
			bfs(n,i);
		}
	}


	return 0;
}