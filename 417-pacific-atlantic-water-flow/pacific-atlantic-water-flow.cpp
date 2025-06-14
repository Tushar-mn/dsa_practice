class Solution {
public:
    int n, m;

    vector<vector<int>> heights;
    vector<vector<bool>> atlantic, pacific;

    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,-1,0,1};

    void dfs(int x, int y, vector<vector<bool>>& vis){
        vis[x][y] = true;

        for(int i=0; i<4; i++){
            int nx = x+dx[i];
            int ny = y+dy[i];

            if(nx>=0 && ny>=0 && nx < n && ny < m && heights[nx][ny] >= heights[x][y] && !vis[nx][ny]){
                dfs(nx,ny,vis);
            }
        }
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        n = heights.size();
        m = heights[0].size();

        this->heights = heights;

        pacific.assign(n, vector<bool>(m, false));
        atlantic.assign(n, vector<bool>(m, false));

        for(int i=0; i<n; i++) dfs(i, 0, pacific);
        for(int j=0; j<m; j++) dfs(0, j, pacific);

        for(int i=0; i<n; i++) dfs(i, m-1, atlantic);
        for(int j=0; j<m; j++) dfs(n-1, j, atlantic);

        vector<vector<int>> result;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(pacific[i][j] && atlantic[i][j]){
                    result.push_back({i, j});
                }
            }
        }

        return result;
    }
};