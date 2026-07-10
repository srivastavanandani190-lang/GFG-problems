long long int no_of_subarrays(int n, vector<int> &arr) {
    // Write your code here.
      long long total = 0;
        long long count = 0;

        for (int num : arr) {
            if (num == 0) {
                count++;
                total += count;
            } else {
                count = 0;
            }
        }

        return total;
}
