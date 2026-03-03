class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {

        int i = 0, j = 0, count = 0;

        while (i < a.size() && j < b.size()) {
            count++;
            if (a[i] <= b[j]) {
                if (count == k) return a[i];
                i++;
            } else {
                if (count == k) return b[j];
                j++;
            }
        }

        while (i < a.size()) {
            count++;
            if (count == k) return a[i];
            i++;
        }

        while (j < b.size()) {
            count++;
            if (count == k) return b[j];
            j++;
        }

        return -1;
    }
};