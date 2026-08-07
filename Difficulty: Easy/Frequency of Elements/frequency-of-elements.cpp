class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        map<int, int> freq;
        for(int x: arr){
            freq[x]++;
        }
        vector<vector<int>>ans;
        for(auto it : freq){
            ans.push_back({it.first, it.second});
        }
        return ans;
    }
};