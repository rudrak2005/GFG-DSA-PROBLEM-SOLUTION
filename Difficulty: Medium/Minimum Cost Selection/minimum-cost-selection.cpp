class Solution {
  public:
    int minCost(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        
        if(n ==0)
            return 0;
            vector<int> dp = mat[0];
            for(int i =1; i<n; i++){
                vector<int> cur(3);
                cur[0]=mat[i][0] +min(dp[1], dp[2]);
                cur[1]=mat[i][1] +min(dp[0], dp[2]);
                cur[2]=mat[i][2] +min(dp[0], dp[1]);
                dp = cur;
            }
            return min({dp[0], dp[1], dp[2]});
    }
};