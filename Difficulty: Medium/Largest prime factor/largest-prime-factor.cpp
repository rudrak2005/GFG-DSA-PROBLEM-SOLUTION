class Solution {
  public:
     long long int largestPrimeFactor(long long int n) {
        // code here
        long long ans= -1;
        while (n%2==0){
            ans=2;
            n /=2;
            
        }
        for(long long i=3; i*i<=n; i+=2){
            while(n%i==0){
                ans=i;
                n /=i;
            }
        }
        if(n>2){
            ans =n;
            
        }
        return ans;
    }
};