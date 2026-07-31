class Solution {
  public:
    int countOnes(vector<int>& arr) {
        // code here
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                count++;
            }
        }
        return count;
        
    }
};