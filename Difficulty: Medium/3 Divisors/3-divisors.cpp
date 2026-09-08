class Solution {
public:
    vector<int> threeDivisors(vector<int>& query) {
        vector<int> ans;

        // 1. Find the maximum query value to determine our prime search limit
        long long max_q = 0;
        for (long long q : query) {
            max_q = max(max_q, q);
        }

        // A number has exactly 3 divisors only if it's a square of a prime number.
        // We only need to find primes up to the square root of the max query.
        long long limit = sqrt(max_q);
        vector<bool> is_prime(limit + 1, true);
        vector<long long> primes;

        // 2. Sieve of Eratosthenes to quickly precompute primes up to the square root
        if (limit >= 2) {
            is_prime[0] = is_prime[1] = false;
            for (long long p = 2; p * p <= limit; p++) {
                if (is_prime[p]) {
                    for (long long i = p * p; i <= limit; i += p)
                        is_prime[i] = false;
                }
            }
            // Store the computed primes in a list
            for (long long p = 2; p <= limit; p++) {
                if (is_prime[p]) {
                    primes.push_back(p);
                }
            }
        }

        // 3. For each query, count how many prime numbers are <= sqrt(query)
        for (long long q : query) {
            long long root = sqrt(q);
            int count = 0;

            // Count primes up to the square root of the current query
            for (long long p : primes) {
                if (p <= root) {
                    count++;
                } else {
                    break;
                }
            }
            ans.push_back(count);
        }

        return ans;
    }
};