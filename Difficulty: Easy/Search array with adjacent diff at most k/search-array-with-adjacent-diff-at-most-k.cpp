// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.
class Solution {
  public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        int index = -1;
        int index1 = -1;
        int count = 0;

        // find index of k
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == k) {
                index = i;
                break;
            }
        }

        // find index of x
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x) {
                count++;
                index1 = i;

                if (count == 1) {
                    return index1;
                } else {
                    return index;
                }
            }
        }

        return -1;
    }
};
