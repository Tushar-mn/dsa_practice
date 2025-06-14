#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int n, m;
	vector<vector<bool>>vis;

	int dx[4] = {1,0,-1,0};
	int dy[4] = {0, -1, 0, 1};

	int dfs(int x, int y, vector<vector<int>>& grid){
		vis[x][y] = true;

		int count = 0;
		for(int i=0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];

			if(nx < 0 || nx >= n || ny < 0 || ny >= m || grid[nx][ny] == 0){
				count++;
			} else if(!vis[nx][ny]){
				count += dfs(nx, ny, grid);
			}
		}
		return count;
	}

	int islandPerimeter(vector<vector<int>>& grid){
		n = grid.size();
		m = grid[0].size();

		vis.assign(n, vector<bool>(m, false));

		int count = 0;
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


int main(){
	int n;
	cin >> n;

	int m;
	cin >> m;

	vector<vector<int>> a(n, vector<int>(m));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}

	Solution sol;

	cout << sol.islandPerimeter(a) << endl;
}