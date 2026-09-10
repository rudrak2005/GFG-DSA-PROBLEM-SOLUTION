class Solution {
  public:
    long long countIncreasing(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(n == 0){
            return 0;
        }
        long long ans = 0;
        long long len = 1;
        for(int i =0; i<n; i++){
            if(i>0 && arr[i] > arr[i -1])
                len++;
            else
              {
                  ans += (len *(len -1))/2;
                  len = 1;
              }
              
              
        }
        ans += (len * (len -1)) / 2;
        return ans;
    }
};
