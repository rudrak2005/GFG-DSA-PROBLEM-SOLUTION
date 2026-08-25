class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        string  rev = s;
         reverse(rev.begin(), rev.end());
         return s ==rev;
    }
};