class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();

        long long sum = 1LL * (n + 1) * (n + 2) / 2;
        long long arrsum = 0;

        for(int i = 0; i < n; i++) {
            arrsum += arr[i];
        }

        return sum - arrsum;
    }
};