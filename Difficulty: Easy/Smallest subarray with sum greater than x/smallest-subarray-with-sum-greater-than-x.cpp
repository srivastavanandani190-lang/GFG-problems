class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int s=0;
        int e=0;
        int n=arr.size();
        int total=INT_MAX;
        int sum=0;
        while(e<n){
        sum+=arr[e];
        while(sum>x){
            total=min(total,e-s+1);
            sum-=arr[s++];
        }
        e++;
        }
        return total == INT_MAX ? 0 : total;
    }
};