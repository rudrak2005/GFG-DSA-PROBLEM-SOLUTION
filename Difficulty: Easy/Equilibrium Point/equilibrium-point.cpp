class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        long long total = 0;
        
        for(int x : arr){
            total += x;}
            
            
          long long left = 0;
            for(int i =0; i<arr.size(); i++){
                long long right = total -left-arr[i];
                
                if(left==right)
                    return i;
                    left += arr[i];
            }
            return -1;
    }
};