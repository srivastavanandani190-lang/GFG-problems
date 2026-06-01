class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
   
        int total=0;
        int sumpre=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int i=0;i<arr.size();i++){
            sumpre+=arr[i];
            
            if(m.count(sumpre-k)){
                total+=m[sumpre-k];
                 m[sumpre]++;
            }
            else{
                m[sumpre]++;
            }
        }
        return total;
    }
};