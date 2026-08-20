class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        
        for(int i = 0; i<n; i +=k){
            int end = min(i+k, n);
        vector<int> temp;
        
        for(int j =i ; j<end; j++)
        temp.push_back(arr[j]);
        reverse(temp.begin(), temp.end());
        for(int j=i; j<end; j++)
        arr[j]=temp[j-i];
        }
    }
};
