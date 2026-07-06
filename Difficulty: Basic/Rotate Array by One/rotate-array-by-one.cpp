class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        vector <int> temp(n);
        
        temp[0]= arr[n-1];
        
        for(int i=0; i<n-1; i++){
            temp[i+1]= arr[i];
        }
        arr = temp;
    }
};