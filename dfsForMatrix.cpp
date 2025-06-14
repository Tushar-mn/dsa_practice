#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

bool vis[N];
vector<int> g[N];

void dfs(int i, int j,int initial, int newColor, vector<vector<int>>& image){
	int n = image.size();
	int m = image[0].size();
	if(i<0||j<0)return;
	if(i>=n || j>=m)return;
	if(image[i][j] != initial)return;

	image[i][j] = newColor;
	// if(i-1 >= 0 && image[i-1][j] == inital)
	dfs(i-1, j);
	dfs(i+1, j);
	dfs(i, j-1);
	dfs(i, j+1);
}	

vector<vector<int>> floodFill(vector<vector<int>>& image){
	int initial = image[sr][sc];
	if(initialColor != newColor)
	dfs(sr,sc,initial, newColor, image);

	return image;
}

int main(){
	
}