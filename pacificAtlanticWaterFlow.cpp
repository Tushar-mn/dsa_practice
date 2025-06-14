#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

	int n, m;

	vector<vector<int>> heights;
	vector<vector<bool>> pacific, atlantis;

	int dx[4] = {1,0,-1,0};
	int dy[4] = {0,1,0,-1};

	void dfs(int x, int y, vector<vector<bool>>& vis){
		vis[x][y] = true;

		for(int i=0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];

			if(nx>=0 && ny>=0 && nx<n && ny<m && !vis[nx][ny] && heights[nx][ny] >= heights[x][y]){
				dfs(nx, ny, vis);
			}
		}
	}

	vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights){
		n = heights.size();
		m = heights[0].size();

		this->heights = heights;

		pacific.assign(n, vector<bool>(m, false));
		atlantis.assign(n, vector<bool>(m, false));

		for(int i=0; i<n; i++) dfs(i, 0, pacific);
		for(int j=0; j<m; j++) dfs(0, j, pacific);

		for(int i=0; i<n; i++) dfs(i, m-1, atlantis);
		for(int j=0; j<m; j++) dfs(n-1, j, atlantis);

		vector<vector<int>> result;

		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(atlantis[i][j] && pacific[i][j]){
					result.push_back({i, j});
				}
			}
		}

		return result;
	}
};

int main(){
	int n, m;
	cin >> n >> m;

	vector<vector<int>> a(n,vector<int>(m));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}

	Solution sol;
	vector<vector<int>> ans = sol.pacificAtlantic(a);

	for(auto& cell: ans){
		cout << cell[0] << " " << cell[1]<< endl;
	}
}