class Solution {
public:
    int n, m;

    vector<vector<bool>> vis;

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    void dfs(int x, int y, vector<vector<char>>& grid){
        vis[x][y] = true;
        for(int dir = 0; dir<4; dir++){
            int nx = x+dx[dir];
            int ny = y+dy[dir];

            if(0 <= nx && nx < n && 0 <= ny && ny < m && !vis[nx][ny] && grid[nx][ny] == '1'){
                dfs(nx, ny, grid);
            }
        }
    } 

    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();

        vis.assign(n, vector<bool> (m, false)); // to alot every char to false so   whenever true come we knew about it

        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    dfs(i, j, grid);
                    count++;
                }    
            }
        }
        return count;
    }
};