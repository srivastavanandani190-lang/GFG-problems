class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<int> ans;
        long long res = 1;
        ans.push_back(1); // First element is always 1
        
        for (int i = 1; i < n; i++) {
            res = res * (n - i);
            res = res / i;
            ans.push_back(res);
        }
        
        return ans;
    }
};