class Solution {
  public:
    string merge(string &s1, string &s2) {
        // code here
        int n=s1.size();
        int m=s2.size();
        string ans="";
        int i=0;
        while(i<n || i<m){
            if(i<n){
                ans+=s1[i];
            }
            if(i<m){
                ans+=s2[i];
            }
            i++;
        }
        return ans;
    }
};