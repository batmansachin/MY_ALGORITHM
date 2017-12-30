class GfG{
    public int maxArea(int a[][],int m,int n){
        if(a==null || m==0 || n== 0) return 0;
        int dp[] = new int[m];
        int height[] = new int[m];
        int p = -1;
        int ans = 0;
        System.out.println("1 ");
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(a[i][j]==1){
                    height[j] += a[i][j];
                }
                else{
                    height[j] = 0;
                }
            }
            p= -1;
            
           for(int j = 0;j<m;j++){
              while(p>0 && height[j] < height[dp[p]]){
                  int start = p>0 ? dp[p-1] : -1;
                  ans = Math.max(ans,(j-start-1)*height[dp[p]]);
                  p--;
              } 
              dp[++p] = i;
           }
        }
        return ans;
    }
}