class Solution {
  public:
    vector<int> threeDivisors(vector<int>& query) {
        // code here
          int maxN = *max_element(query.begin(), query.end());
        int limit = sqrt(maxN);
        
        vector<bool> isPrime(limit+1, true);
  isPrime[0]= isPrime[1]=false;
       
       for(int i=2; i*i <=limit; i++){
           if(isPrime[i]){
               for(int j=i*i; j<=limit; j+=i) {
                   isPrime[j]= false;
               }
           }
       }
       vector<int>prefix(limit+1, 0);
       
       for(int i=2; i<=limit; i++){
         prefix[i]=prefix[i-1];
         if(isPrime[i]) prefix[i]++;
               
       }
       
      
           vector<int> ans;
           
           for(int x :query){
               ans.push_back(prefix[(int )sqrt(x)]);
               
         
       }
       return ans;
    }
};