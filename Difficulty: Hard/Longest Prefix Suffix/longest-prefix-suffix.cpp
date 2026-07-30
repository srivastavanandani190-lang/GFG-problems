class Solution {
  public:
    int getLPSLength(string &s) {
        // code here
        vector<int>lps(s.size(),0);
        int p=0,su=1;//suffix,prefix
        while(su<s.size()){
            if(s[p]==s[su]){
                lps[su]=p+1;
                p++;
                su++;
            }
            else{
                if(p==0){
                    lps[su]=0;
                    su++;
                }
                else{
                    p=lps[p-1];
                }
            }
        }
        return lps[s.size()-1];
    }
};