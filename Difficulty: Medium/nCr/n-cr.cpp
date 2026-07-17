class Solution {
  public:
    int nCr(int n, int r) {
        // code here
        const int MOD = 10000000007;
        if(r>n) return 0;
        vector<vector<int>> dp(n+1, vector<int>(r+1, 0));
        for(int i=0; i<=n; i++){
            for(int j=0; j<= min(i,r); j++){
                if(j==0 || j==i)
                    dp[i][j]=1;
                
                else{
                    dp[i][j]= (dp[i-1][j]+dp[i-1][j-1])%MOD;
                }
            }
        }
        return dp[n][r];
    }
};