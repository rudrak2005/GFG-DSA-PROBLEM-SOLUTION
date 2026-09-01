class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int n = arr.size();
        long long ans=arr[0];
        
        long long prefix = 1;
        long long suffix =1;
        
        for(int i =0; i<n; i++){
           if(prefix ==0)
            prefix = 1;
            
            if(suffix == 0)
                suffix =1;
                
                prefix *= arr[i];
                suffix *= arr[n-1-i];
                
                ans = max(ans , max(prefix, suffix ));
        }
        return ans;
    }
};