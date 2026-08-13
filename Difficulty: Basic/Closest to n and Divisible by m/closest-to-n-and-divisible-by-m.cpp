class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
      m = abs(m);
      int q= n/m;
      if(n<0 && n%m !=0){
          q--;
      }
      int a = q*m;
      int b = (q+1)*m;
      int da = abs(n-a);
      int db = abs(n-b);
      
      if(da<db)
        return a;
        
        if(db<da)
            return b;
            
    return max(abs(a), abs(b))==abs(a)? a:b;
    }
};