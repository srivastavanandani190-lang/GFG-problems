class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
    sort(arr.begin(),arr.end());
    int n=arr.size()-1;
    int ans=arr[n]+arr[n-1];
    return ans;
    }
};
