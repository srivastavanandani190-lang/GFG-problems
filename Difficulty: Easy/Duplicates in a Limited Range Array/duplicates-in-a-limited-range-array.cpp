class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
    sort(arr.begin(),arr.end());
    vector<int>ans;
    int j=1;
    for(int i=0;i<arr.size()-1;i++){
      if(arr[i]==arr[j]){
          ans.push_back(arr[i]);
          
      }
      j++;
    }
    return ans;
    }
};