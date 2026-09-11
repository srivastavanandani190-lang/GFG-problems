class Solution {
private:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2 || n == 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }

public:
    vector<int> primeFrequency(vector<int>& arr, int k) {
        // Map stores elements in sorted order automatically
        map<int, int> freq;
        for (int num : arr) {
            freq[num]++;
        }

        vector<int> result;
        for (auto const& [num, count] : freq) {
            // Check if frequency meets minimum k AND is a prime number
            if (count >= k && isPrime(count)) {
                result.push_back(num);
            }
        }

        return result;
    }
};