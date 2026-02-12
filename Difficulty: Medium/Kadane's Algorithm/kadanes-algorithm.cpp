class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int res=arr[0];
        int maxend=arr[0];
        for(int i=1;i<arr.size();i++){
            maxend=max(maxend+arr[i],arr[i]);
            res=max(res,maxend);
        }
        return res;
    }
};