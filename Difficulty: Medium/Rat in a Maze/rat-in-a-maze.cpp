 class Solution {
   public:

     int row[4] = {1, 0, 0, -1};
     int col[4] = {0, -1, 1, 0};
     string dir = "DLRU";

     bool valid(int i, int j, int n)
     {
         return i >= 0 && j >= 0 && i < n && j < n;
     }

     void Total(vector<vector<int>>& maze, int i, int j, int n,
                string path, vector<string>& ans,
                vector<vector<int>>& visited)
     {
         // Base case
         if(i == n-1 && j == n-1)
         {
             ans.push_back(path);
             return;
         }

         visited[i][j] = 1;

         for(int k = 0; k < 4; k++)
         {
             if(valid(i + row[k], j + col[k], n) &&
                maze[i + row[k]][j + col[k]] == 1 &&
                !visited[i + row[k]][j + col[k]])
             {
                 path.push_back(dir[k]);

                 Total(maze,
                       i + row[k],
                       j + col[k],
                       n,
                       path,
                       ans,
                       visited);

                 path.pop_back();
             }
         }

         visited[i][j] = 0;
     }

     vector<string> ratInMaze(vector<vector<int>>& maze) {

         int n = maze.size();

         vector<string> ans;

         vector<vector<int>> visited(n, vector<int>(n, 0));

         string path = "";

         // Source or destination blocked
         if(maze[0][0] == 0 || maze[n-1][n-1] == 0)
             return ans;

         Total(maze, 0, 0, n, path, ans, visited);

         return ans;
     }
 };