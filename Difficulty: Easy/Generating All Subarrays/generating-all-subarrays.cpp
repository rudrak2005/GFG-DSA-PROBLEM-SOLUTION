class Solution {
  public:
    vector<vector<int>> getSubArrays(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        int n = arr.size();
        
        for(int start = 0; start<n; start++){
            vector<int> temp;
            
            for(int end= start; end<n; end++){
                temp.push_back(arr[end]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};