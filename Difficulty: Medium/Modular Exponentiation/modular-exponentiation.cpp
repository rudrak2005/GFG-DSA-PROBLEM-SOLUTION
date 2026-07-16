class Solution {
  public:
    long long  powMod(long long  x, long long  n, long long  M) {
        // code here
      long long ans= 1;
      x %=M;
      while(n>0){
        
              if(n%2==1)
                ans=(ans*x)%M;
                
                
            x= (x*x)%M;;
            
            n /=2;
          }
      return ans;
      
    }
};