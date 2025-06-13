class Solution {
public:
    int n, m;
    vector<vector<bool>> vis;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};

    int dfs(int x, int y, vector<vector<int>>& grid){
        vis[x][y] = true;
        
        int count = 0;

        for(int i=0; i<4; i++){
            int nx = x+dx[i];
            int ny = y+dy[i];

            if(nx<0 || ny<0 || nx >= n || ny >= m || grid[nx][ny] != 1){
                count++;
            } else if(!vis[nx][ny]){
                count += dfs(nx, ny, grid);
            }
        }
        return count;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        vis.assign(n, vector<bool>(m, false));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1){
                    return dfs(i, j, grid);
                }
            }
        }
        return 0;   
    }
};