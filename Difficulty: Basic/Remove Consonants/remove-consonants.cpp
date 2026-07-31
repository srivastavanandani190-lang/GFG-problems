class Solution {
  public:
    string remConsonants(string &s) {
        // code here
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            ans+=s[i];
        }
        return ans;
    }
};