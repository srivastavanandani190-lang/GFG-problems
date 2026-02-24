class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int res=arr[arr.size()-1];
        return res;
    }
};
