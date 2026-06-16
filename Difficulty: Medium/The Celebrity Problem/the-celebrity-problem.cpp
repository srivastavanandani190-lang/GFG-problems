class Solution {
public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        stack<int> st;

        // Push all persons into the stack
        for (int i = 0; i < n; i++) {
            st.push(i);
        }

        // Find the potential celebrity
        while (st.size() > 1) {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();

            if (mat[a][b] == 1) {
                // a knows b, so a cannot be celebrity
                st.push(b);
            } else {
                // a does not know b, so b cannot be celebrity
                st.push(a);
            }
        }

        // No candidate found
        if (st.empty())
            return -1;

        int cand = st.top();

        // Verify the candidate
        for (int i = 0; i < n; i++) {
            if (i == cand)
                continue;

            // Celebrity should know nobody,
            // and everybody should know the celebrity.
            if (mat[cand][i] == 1 || mat[i][cand] == 0)
                return -1;
        }

        return cand;
    }
};