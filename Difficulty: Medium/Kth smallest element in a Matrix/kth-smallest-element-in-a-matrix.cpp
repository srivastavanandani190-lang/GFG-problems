class Solution {
public:
    int kthSmallest(vector<vector<int>> &mat, int k) {

        vector<pair<int, pair<int,int>>> temp;

        for(int i = 0; i < mat.size(); i++) {
            temp.push_back({mat[i][0], {i, 0}});
        }

        priority_queue<
            pair<int,pair<int,int>>,
            vector<pair<int,pair<int,int>>>,
            greater<pair<int,pair<int,int>>>
        > p(temp.begin(), temp.end());

        int ans = 0;

        while(k--) {

            auto element = p.top();
            p.pop();

            ans = element.first;

            int i = element.second.first;
            int j = element.second.second;

            if(j + 1 < mat[i].size()) {
                p.push({mat[i][j + 1], {i, j + 1}});
            }
        }

        return ans;
    }
};