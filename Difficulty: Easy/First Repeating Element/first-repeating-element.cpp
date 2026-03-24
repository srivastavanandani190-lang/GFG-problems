class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        unordered_map<int,int> freq;
        
        for(int i = 0; i < arr.size(); i++){
            freq[arr[i]]++;
        }
        
        for(int i = 0; i < arr.size(); i++){
            if(freq[arr[i]] > 1){
                return i + 1; // 1-based index
            }
        }
        
        return -1;
    }
};