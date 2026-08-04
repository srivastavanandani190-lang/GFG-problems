class Solution {
  public:
    bool check(int n, vector<string> &Board, int i, int j) {
        // upper left diagonal
        int row = i, col = j;
        while (row >= 0 && col >= 0) {
            if (Board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }

        // upper right diagonal
        row = i;
        col = j;
        while (row >= 0 && col < n) {
            if (Board[row][col] == 'Q')
                return false;
            row--;
            col++;
        }

        return true;
    }

    void find(int row, int n, vector<vector<int>> &ans,
              vector<string> &Board, vector<bool> &column,
              vector<int> &temp) {

        if (row == n) {
            ans.push_back(temp);
            return;
        }

        for (int j = 0; j < n; j++) {
            if (!column[j] && check(n, Board, row, j)) {
                column[j] = true;
                Board[row][j] = 'Q';
                temp.push_back(j + 1);   // Store 1-based column

                find(row + 1, n, ans, Board, column, temp);

                temp.pop_back();
                Board[row][j] = '.';
                column[j] = false;
            }
        }
    }

    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> ans;
        vector<string> Board(n, string(n, '.'));
        vector<bool> column(n, false);
        vector<int> temp;

        find(0, n, ans, Board, column, temp);

        return ans;
    }
};