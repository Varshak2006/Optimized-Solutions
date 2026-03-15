class Solution {
public:
    bool checkBFS(vector<vector<char>>& board, vector<vector<bool>>& vis,
                  int m, int n, vector<pair<int,int>>& cells) {

        int a = board.size();
        int b = board[0].size();
        queue<pair<int,int>> q;
        q.push({m, n});
        vis[m][n] = true;
        cells.push_back({m,n});

        bool surrounded = true;

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            // if touches boundary → not surrounded
            if(row == 0 || col == 0 || row == a-1 || col == b-1){
                surrounded = false;
            }

            if(row-1 >= 0 && board[row-1][col] == 'O' && !vis[row-1][col]){
                vis[row-1][col] = true;
                q.push({row-1,col});
                cells.push_back({row-1,col});
            }

            if(row+1 < a && board[row+1][col] == 'O' && !vis[row+1][col]){
                vis[row+1][col] = true;
                q.push({row+1,col});
                cells.push_back({row+1,col});
            }

            if(col-1 >= 0 && board[row][col-1] == 'O' && !vis[row][col-1]){
                vis[row][col-1] = true;
                q.push({row,col-1});
                cells.push_back({row,col-1});
            }

            if(col+1 < b && board[row][col+1] == 'O' && !vis[row][col+1]){
                vis[row][col+1] = true;
                q.push({row,col+1});
                cells.push_back({row,col+1});
            }
        }

        return surrounded;
    }

    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n,false));

        for(int i = 1; i < m-1; i++){
            for(int j = 1; j < n-1; j++){
                if(board[i][j] == 'O' && !visited[i][j]){

                    vector<pair<int,int>> cells;
                    bool isSurrounded = checkBFS(board, visited, i, j, cells);

                    if(isSurrounded){
                        for(auto &p : cells){
                            board[p.first][p.second] = 'X';
                        }
                    }
                }
            }
        }
    }
};
