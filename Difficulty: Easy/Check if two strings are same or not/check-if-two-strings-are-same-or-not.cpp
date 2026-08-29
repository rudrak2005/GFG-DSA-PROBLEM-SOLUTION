class Solution {
  public:
    bool areStringsSame(string &s1, string &s2) {
        // code here
        if(s1.length() != s2.length())
            return false;
        for(int i =0; i<s1.length(); i++){
            if(s1[i] != s2[i])
            return false;
        }
        return true;
    }
};