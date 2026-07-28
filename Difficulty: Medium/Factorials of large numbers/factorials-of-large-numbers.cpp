class Solution {
  public:
    vector<int> factorial(int n) {
        vector<int> ans;
        ans.push_back(1);
        
        while (n > 1) {
            int carry = 0, size = ans.size(), res;
            for (int i = 0; i < size; i++) {
                res = ans[i] * n + carry; // Fixed: added carry instead of multiplying
                ans[i] = res % 10;
                carry = res / 10;
            }
            while (carry) {
                ans.push_back(carry % 10);
                carry /= 10;
            }
            n--; // Fixed: decrement n to avoid infinite loop
        }    
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};