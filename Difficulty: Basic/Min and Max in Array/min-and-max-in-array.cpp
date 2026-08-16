class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        vector<int>ans;
        ans.push_back(arr[0]);
        ans.push_back(arr[arr.size()-1]);
        return ans;
        }
};