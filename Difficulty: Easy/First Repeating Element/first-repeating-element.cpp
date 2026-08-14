 class Solution {
    public:
      int firstRepeated(vector<int> &arr) {
          unordered_map<int, int> freq;
          int n = arr.size();

          // Step 1: Store the frequency of each element
          for(int i = 0; i < n; i++) {
              freq[arr[i]]++;
          }

          // Step 2: Traverse the array again to find the first element 
          // that has a frequency greater than 1
          for(int i = 0; i < n; i++) {
              if(freq[arr[i]] > 1) {
                  // Return 1-based index
                  return i + 1; 
              }
          }

          // Step 3: If no repeating element is found
          return -1;
      }
  };