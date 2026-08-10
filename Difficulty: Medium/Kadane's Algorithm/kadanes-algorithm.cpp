class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        long long currentSum = arr[0];
        long long maxSum = arr[0];
        for(int i =1; i<arr.size(); i++){
            // currentSum = max(int max(long long)arr[i],
            currentSum =max ( (long long) arr[i],
            currentSum  + arr[i]);
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
        
    }
};