 class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        if(arr.size()<2) return -1;
        sort(arr.begin(),arr.end());
        int last=arr.size();
        for(int i=last-2;i>=0;i--){
            if(arr[i]!=arr[last-1]){
                return arr[i];}
        }
        return -1;
    }
};
 