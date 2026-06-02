

class Solution {
  public:
    long long countSubArrayProductLessThanK(const vector<int>& arr, int n,
                                            long long k) {
     long long p=1;
     long long count=0;
     int s=0;
     int e=0;
     while(e<n){
         p*=arr[e];
         while(p>=k && s<=e){
             p/=arr[s];
             s++;
         }
         count+=e-s+1;
         e++;
     }
                                           
         return count;                                  
 }
};