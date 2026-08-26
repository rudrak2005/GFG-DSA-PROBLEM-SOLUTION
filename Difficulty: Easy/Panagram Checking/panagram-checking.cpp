class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        bool visited[26]={false};
            for(char ch : s){
                if(isalpha(ch)){
                    ch = tolower(ch);
                    visited[ch- 'a']=true;
                }
            }
            for(int i =0; i<26; i++){
                if(!visited[i])
                return false;
            }
            return true;
    }
};