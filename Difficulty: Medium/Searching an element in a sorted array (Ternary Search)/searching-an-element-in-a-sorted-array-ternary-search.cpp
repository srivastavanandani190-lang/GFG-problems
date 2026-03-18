
class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int ternarySearch(int arr[], int N, int K) {
        // Your code here
        int index=-1;
        for(int i=0;i<N;i++){
            if(arr[i]==K){
              
                return 1;
            }
        }
        return index;
    }
};