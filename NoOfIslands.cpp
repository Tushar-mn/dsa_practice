#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int n, m;
	vector<vector<bool>> vis;

	int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
	int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

	void dfs(int x, int y, vector<vector<char>> &grid){
		vis[x][y] = true;

		for(int i=0; i<8; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];

			if(nx>=0 && nx<n && ny>=0 && ny<m && !vis[nx][ny] && grid[nx][ny] == 'L'){
				dfs(nx, ny, grid);
			}
		}
	}

	int numIslands(vector<vector<char>>& grid){
	n = grid.size();
	m = grid[0].size();

	vis.assign(n, vector<bool> (m, false));

	int count = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(!vis[i][j] && grid[i][j] == 'L'){
				dfs(i, j, grid);
				count++;
			}
		}
	}

	return count;
}
};


int main(){
	int n;
	cin >> n;

	int m;
	cin >> m;

	vector<vector<char>>a(n, vector<char>(m));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	} 

	Solution sol;
	cout << sol.numIslands(a) << endl;
}