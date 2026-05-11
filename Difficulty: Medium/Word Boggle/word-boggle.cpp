class Solution {
public:
    
    int dx[8] = {-1,-1,-1,0,0,1,1,1};
    int dy[8] = {-1,0,1,-1,1,-1,0,1};

    bool dfs(vector<vector<char>>& board, string &word,
             int x, int y, int idx,
             vector<vector<int>>& vis) {

        if (idx == word.size())
            return true;

        int R = board.size();
        int C = board[0].size();

        if (x < 0 || y < 0 || x >= R || y >= C ||
            vis[x][y] || board[x][y] != word[idx])
            return false;

        vis[x][y] = 1;

        for (int k = 0; k < 8; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (dfs(board, word, nx, ny, idx + 1, vis)) {
                vis[x][y] = 0;
                return true;
            }
        }

        vis[x][y] = 0;
        return false;
    }

    bool exist(vector<vector<char>>& board, string &word) {

        int R = board.size();
        int C = board[0].size();

        vector<vector<int>> vis(R, vector<int>(C, 0));

        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {

                if (board[i][j] == word[0]) {

                    if (dfs(board, word, i, j, 0, vis))
                        return true;
                }
            }
        }

        return false;
    }

    vector<string> wordBoggle(vector<vector<char>>& board,
                              vector<string>& dictionary) {

        vector<string> ans;

        // Sorting helps maintain lexicographical order
        sort(dictionary.begin(), dictionary.end());

        for (string &word : dictionary) {

            if (exist(board, word))
                ans.push_back(word);
        }

        return ans;
    }
};