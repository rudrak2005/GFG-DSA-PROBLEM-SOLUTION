class Solution {
  public:
    vector<int> sieve(int n) {
        // code here
        vector<int> ans;
        for(int i=2; i<=n; i++){
            bool prime=true;
            for(int j=2; j*j<=i; j++){
                if(i%j==0){
                    prime=false;
                    break;
                }
            }
            if(prime)
            ans.push_back(i);
        }
        return ans;
    }
};