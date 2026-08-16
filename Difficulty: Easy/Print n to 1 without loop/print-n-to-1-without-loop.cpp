class Solution {
  public:
    void printNos(int n) {
        // code here
        solve(n);
    }
    void solve(int n){
        if(n==0)
            return;
         cout<<n<<" ";
         solve(n-1);
    }
};