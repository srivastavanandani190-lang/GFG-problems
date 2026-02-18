class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        bool flag=true;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1.size()!=s2.size()){
            return false;
        }
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                flag=false;
                break;
            }
        }
        return flag;
    }
};