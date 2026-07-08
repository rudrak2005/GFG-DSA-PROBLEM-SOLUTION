class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int temp= n;
        int digits = (int)log10(n)+1;
        int sum=0;
        while(n>0){
            int digit = n%10;
            sum +=pow(digit, digits);
            n/=10;
        }
        return sum == temp;
    }
};