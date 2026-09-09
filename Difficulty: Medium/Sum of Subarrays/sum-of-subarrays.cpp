class Solution {
  public:
    long long subarraySum(vector<int>& arr) {
        // code here
        int n = arr.size();
        long long ans = 0;
        
        for(int i =0; i<n; i++){
            long long contribution = 1LL * arr[i] * (i+1)*(n-i);
          ans += contribution;  
        }
        return ans;
    }
};