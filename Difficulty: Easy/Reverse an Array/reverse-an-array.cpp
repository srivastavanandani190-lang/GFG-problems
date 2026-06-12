class Solution {
  public:
    void reverseArray(vector<int> &arr) {
    //  int start=0;
    //  int end=arr.size()-1;
    //  while(start<=end){
    //     swap(arr[start],arr[end]);
    //      start++;
    //      end--;
    // }
    // }
    stack<int>st;
    for(int i=0;i<arr.size();i++){
        st.push(arr[i]);
    }
    int i=0;
    while(!st.empty()){
        arr[i]=st.top();
        st.pop();
        i++;
    }
    }
};