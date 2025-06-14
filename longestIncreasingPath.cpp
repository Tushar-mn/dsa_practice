#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int n, m;

	vector<vector<int>> vis;

	int dx[4] = {1, 0, -1, 0};
	int dy[4] = {0, -1, 0, 1};

	int dfs(int x, int y, vector<vector<int>>& grid){
		if(vis[x][y] != -1) return vis[x][y];

		int res = 1;
		for(int i=0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];

			if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny] > grid[x][y]){
				res = max(res, 1+dfs(nx, ny, grid));

			}
		}
		vis[x][y] = res;
		return res;
	}

	int longestIncreasingPath(vector<vector<int>>& grid){
		n = grid.size();
		m = grid[0].size();

		vis.assign(n, vector<int>(m, -1));

		int ans = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				ans = max(ans, dfs(i, j, grid));
			}
		}
		return ans;
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

	cout << sol.longestIncreasingPath(a) << endl;
}