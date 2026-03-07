class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        int n = arr1.size();
        int i = 0, j = 0;
        int count = 0;
        
        int m1 = -1, m2 = -1;

        while (count <= n) {
            if (i == n) {
                m1 = m2;
                m2 = arr2[j++];
            }
            else if (j == n) {
                m1 = m2;
                m2 = arr1[i++];
            }
            else if (arr1[i] <= arr2[j]) {
                m1 = m2;
                m2 = arr1[i++];
            }
            else {
                m1 = m2;
                m2 = arr2[j++];
            }
            count++;
        }

        return m1 + m2;
    }
};