class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        bool flag=false;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                flag=false;
                break;
            }
            else{
                flag=true;
            }
        }
        return flag;
    }
};