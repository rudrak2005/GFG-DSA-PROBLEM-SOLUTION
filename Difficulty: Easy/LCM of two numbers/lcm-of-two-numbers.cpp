class Solution {
  public:
    int lcm(int a, int b) {
        // code here
        int start = max(a,b);
        for(int i= start; i<=a*b; i++)
        {if(i%a==0 && i%b ==0) return i;
            }
            return a*b;
    }
};