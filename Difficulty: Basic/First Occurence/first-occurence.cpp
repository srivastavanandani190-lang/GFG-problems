class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
       int n = txt.size();
        int m = pat.size();
        
         
        if (m > n) return -1;
        
        
        for (int i = 0; i <= n - m; i++) {
            
            if (txt.substr(i, m) == pat) {
                return i;  
            }
        }
        
        return -1; 
    }
};
