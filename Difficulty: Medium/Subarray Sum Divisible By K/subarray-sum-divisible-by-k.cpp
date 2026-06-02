class Solution {
public:
    long long subCount(vector<int>& arr, int k) {
        unordered_map<int, long long> freq;

        freq[0] = 1;

        long long prefixSum = 0;
        long long count = 0;

        for (int num : arr) {
            prefixSum += num;

            int rem = ((prefixSum % k) + k) % k;

            count += freq[rem];
            freq[rem]++;
        }

        return count;
    }
};