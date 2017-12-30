#include <bits/stdc++.h>
using namespace std;
int ROW = 50;
int COL = 50;
 
int isSafe(int M[][COL], int row, int col,   bool visited[][COL])
{
    
    return (row >= 0) && (row < ROW) &&
           (col >= 0) && (col < COL) &&
           (M[row][col] && !visited[row][col]);
}

void DFS(int M[][COL], int row, int col, bool visited[][COL], int &count)
{
    
    static int rowNbr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    static int colNbr[] = {-1, 0, 1, -1, 1, -1, 0, 1};
 
    // Mark this cell as visited
    visited[row][col] = true;
 
    
    for (int k = 0; k < 8; ++k)
    {
        if (isSafe(M, row + rowNbr[k], col + colNbr[k],
                                              visited))
        {
            // increment region length by one
            count++;
            DFS(M, row + rowNbr[k], col + colNbr[k],
                                    visited, count);
        }
    }
}

int  largest(int M[][COL])
{
    
    bool visited[ROW][COL];
    memset(visited, 0, sizeof(visited));
 
    int result  = INT_MIN;
    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COL; ++j)
        {
            // If a cell with value 1 is not
            if (M[i][j] && !visited[i][j])
            {
                // visited yet, then new region found
                int count = 1 ;
                DFS(M, i, j, visited , count);
 
                // maximum region
                result = max(result , count);
            }
         }
    }
    return result ;
}
int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		//int ROW,COL;
		cin>>ROW>>COL;
		int arr[ROW][COL];
		for(int i =0 ;i<ROW;i++){
			for(int j = 0;j<COL;j++){
				cin>>arr[i][j];
			}
		}
		
		
		cout<<largest(arr)<<endl;
		
	}

	return 0;
}