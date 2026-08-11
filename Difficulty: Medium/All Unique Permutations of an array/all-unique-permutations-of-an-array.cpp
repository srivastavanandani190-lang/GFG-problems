class Solution {
  public:
  void permut(vector<int>& arr, vector<vector<int>> &ans,int index){
      if(index==arr.size()){
          ans.push_back(arr);
          return;
      }
      vector<bool>use(9,0);
      for(int i=index;i<arr.size();i++){
          if(use[arr[i]-1]==0){
            swap(arr[index],arr[i]);
            permut(arr,ans,index+1);
              swap(arr[index],arr[i]);
              use[arr[i]-1]=1;
        }
      }
  }
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        // code here
         vector<vector<int>> ans;
         permut(arr,ans,0);
         sort(ans.begin(),ans.end());
         return ans;
    }
};