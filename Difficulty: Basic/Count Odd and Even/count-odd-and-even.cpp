class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        // code here
        pair<int,int>ans;
        int counte=0,counto=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0){
                counte++;
            }
            else{
                counto++;
            }
        }
      ans = make_pair(counto, counte);
        return ans;
    }
};