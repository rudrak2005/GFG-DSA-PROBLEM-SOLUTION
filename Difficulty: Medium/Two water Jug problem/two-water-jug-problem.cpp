class Solution {
  public:
    int minSteps(int m, int n, int d) {
        // Code here
        if(d>max(m,n))
            return -1;
            
            if(d %__gcd(m,n) !=0)
            return -1;
            
    return min(pour(m,n,d), pour(n,m,d));
    }
    
    int pour(int from, int to, int d)
{
    int a=0, b=0, steps=0;
    while(a != d&& b     !=d){
        if(a==0)
             a=from;
             
             else if(b==to)
                b=0;
                else{
                    int x=min(a, to -b);
                    a -= x;
                    b +=x;
                }
                steps++;
    }
    return steps;
}};