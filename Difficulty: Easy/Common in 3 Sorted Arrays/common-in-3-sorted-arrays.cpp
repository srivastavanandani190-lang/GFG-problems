class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        vector<int> result;
        int i = 0, j = 0, k = 0;
        
        while (i < a.size() && j < b.size() && k < c.size()) {
            // If we find a common element in all three arrays
            if (a[i] == b[j] && b[j] == c[k]) {
                // To avoid duplicate elements in the result
                if (result.empty() || result.back() != a[i]) {
                    result.push_back(a[i]);
                }
                i++;
                j++;
                k++;
            }
            // If the element in array 'a' is smaller, move pointer 'i'
            else if (a[i] < b[j]) {
                i++;
            }
            // If the element in array 'b' is smaller, move pointer 'j'
            else if (b[j] < c[k]) {
                j++;
            }
            // Otherwise, the element in array 'c' is the smallest, move pointer 'k'
            else {
                k++;
            }
        }
        
        return result;
    }
};