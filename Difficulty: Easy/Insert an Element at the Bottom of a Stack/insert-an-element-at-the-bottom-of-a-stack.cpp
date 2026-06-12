// User function Template for C++

class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        stack<int>ans;
        while(!st.empty()){
                ans.push(st.top());
                st.pop();
        }
        st.push(x);
        while(!ans.empty()){
            st.push(ans.top());
            ans.pop();
        }
        return st;
    }
};