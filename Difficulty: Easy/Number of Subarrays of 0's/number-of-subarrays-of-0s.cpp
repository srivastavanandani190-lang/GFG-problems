// User function Template for C++

long long int no_of_subarrays(int n, vector<int> &arr) {
    // Write your code here.
    long long int total=0;
    long long int count=0;
    for(long long int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
            total+=count;
        }
        else{
            count=0;
        }

    }
            return total;
}