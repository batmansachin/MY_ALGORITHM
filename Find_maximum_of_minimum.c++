#include <bits/stdc++.h>
using namespace std;
int n = 10;

bool isValind(vector<vector<char> > &board,int row,int col ,char c){
	for(int i=0; i<9; i++) {
        if(board[i][col] != '0' && board[i][col] == c) return false;
        if(board[row][i] != '0' && board[row][i] == c) return false;
        if(board[3*(row/3)+i/3][3*(col/3)+i%3] != '0' && board[3*(row/3)+i/3][3*(col/3)+i%3] == c) return false;
    }
    return true;

}

bool solve(vector<vector<char> > &board){
	for(int i =0;i<9;i++){
		for(int j =0;j<9;j++){
			if(board[i][j]=='0'){
				for(char c = '1';c<='9';c++){
					if(isValind(board,i,j,c)){
						board[i][j] = c;
						if(solve(board)) return true;
						board[i][j] ='0';
					}
				}
				return false;
			}
		}
	}
	return true;
}

int main(void){

	int t;
	scanf("%d",&t);
	while(t--){
		vector< vector<char> > v;

		char c;
		for(int i = 0;i<9;i++){
			vector<char> v1;
			for(int j = 0;j<9;j++){
				cin>>c;
				v1.push_back(c);
			}
			v.push_back(v1);
		}
		solve(v);
		for(int i =0;i<9;i++){
			for(int j =0;j<9;j++){
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}

	}
	return 0;
}