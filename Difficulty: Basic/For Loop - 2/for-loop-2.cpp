class Solution {
  public:
    void printEvenIndices(const string& s) {
        // code here
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                cout<<s[i];
            }
        }
    }
};