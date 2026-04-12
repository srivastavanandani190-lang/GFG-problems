class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int minVal = arr[0];
        int index = 0;

        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] < minVal) {
                minVal = arr[i];
                index = i;
            }
        }
        
        return index;
    }
};