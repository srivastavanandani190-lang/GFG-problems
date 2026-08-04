class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
    
    int gcd(int n, vector<int>& nums) {
        int result = nums[0];
        for (int i = 1; i < n; i++) {
            result = gcd(result, nums[i]);
            // Early exit if GCD becomes 1, as it can't get any lower
            if (result == 1) {
                return 1;
            }
        }
        return result;
    }
};