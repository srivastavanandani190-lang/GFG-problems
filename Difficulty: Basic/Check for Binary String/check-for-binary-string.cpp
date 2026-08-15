class Solution {
  public:
    bool isBinary(string& s) {
        // code here
        bool flag=true;
        for(int i=0;i<s.size();i++){
            if(s[i]!='0' && s[i]!='1'){
                flag=false;
                break;
            }
        }
        return flag;
    }
};