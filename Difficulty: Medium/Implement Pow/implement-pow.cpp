class Solution {
  public:
    double power(double b, int e) {
        // code here
        long long N=e;
        if(N<0){
            b =1/b;
            N= -N;
        }
        double ans = 1;
        while(N>0){
            if(N%2==1){ans *= b;
    }
    b *= b;
    N /=2;
        
        }
        return ans;
        
    }
};