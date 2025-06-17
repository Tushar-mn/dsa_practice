#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int n, m;
	vector<vector<int>> vis;


	int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
	int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

	int dfs(int x, int y, vector<vector<char>>& grid){
		if(vis[x][y] != -1) return vis[x][y];

		int res = 1;
		for(int i=0; i<8; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];

			if(nx>=0 && ny>=0 && nx<n && ny<m){
				if(grid[nx][ny] == grid[x][y]+1){
					res = max(res, 1+dfs(nx, ny, grid));
				}
			}
		}
		return vis[x][y] = res;
	}

	int ABCpath(vector<vector<char>>& grid){
		n = grid.size();
		m = grid[0].size();

		vis.assign(n, vector<int>(m, -1));

		int ans = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(grid[i][j] == 'A'){
					ans = max(ans, dfs(i, j, grid));
				}
			}
		}
		return ans;
	}
};

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, m;
		cin >> n >> m;

		vector<vector<char>> a(n, vector<char>(m));
		for(int i=0; i<n; i++){
			string row;
			cin >> row;
			for(int j=0; j<m; j++){
				a[i][j] = row[j];
			}
		}

		Solution sol;
		int res = sol.ABCpath(a);
		cout << res << endl;
	}
}
