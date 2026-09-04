class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        unordered_map<int, int> freq;
        for(int x : arr)
            freq[x]++;
            
        vector<int>ans;
        for(auto it : freq){
            if(it.second > n/3)
                ans.push_back(it.first);
                
        }
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};