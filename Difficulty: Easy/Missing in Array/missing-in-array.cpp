class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long sum = 0;
        long long n = arr.size();
        
        long long expectedSum = (n + 1) * (n + 2) / 2;
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        
        return (int)(expectedSum - sum);
    }
};
