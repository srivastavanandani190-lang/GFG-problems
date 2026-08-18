class Solution {
  public:
  void find(int n,vector<string>&ans, string &temp,int zero,int one){
      if(temp.size()==n){
          ans.push_back(temp);
          return ;
      }
      if(zero<one){
          temp.push_back('0');
          find(n,ans,temp,zero+1,one);
          temp.pop_back();
      }
          temp.push_back('1');
          find(n,ans,temp,zero,one+1);
          temp.pop_back();
      
  }
    vector<string> nBitBinary(int n) {
        // code here
        vector<string>ans;
        string temp;
        int zero=0;
        int one=0;
        find(n,ans,temp,zero,one);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};