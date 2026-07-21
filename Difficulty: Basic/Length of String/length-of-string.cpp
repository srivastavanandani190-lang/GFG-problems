class Solution {
  public:
    int lengthString(string &s) {
        // code here
        int count=0;
        int i=0;
        while(s[i]!='\0'){
            
            count++;
            i++;
        }
        return count;
    }
};