class Solution {
  public:
    string toggleCase(string &s) {
        // code here
        string ans;
        for(char ch :s){
            if(ch >= 'a' && ch<='z'){
                ans += ch - 'a' + 'A';
            }
            else if(ch >= 'A' && ch <='Z'){
                ans += ch-'A'+'a';
    
            }
            else{
                ans += ch;
            }
        }
        return ans;
    }
};