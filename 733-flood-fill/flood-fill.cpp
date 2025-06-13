class Solution {
public:
void dfs(int i, int j,int initial, int newColor, vector<vector<int>>& image){
	int n = image.size();
	int m = image[0].size();
	if(i<0||j<0)return;
	if(i>=n || j>=m)return;
	if(image[i][j] != initial)return;

	image[i][j] = newColor;
	// if(i-1 >= 0 && image[i-1][j] == inital)
	dfs(i-1, j, initial, newColor, image);
	dfs(i+1, j, initial, newColor, image);
	dfs(i, j-1, initial, newColor, image);
	dfs(i, j+1, initial, newColor, image);
}	

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor){
	int initial = image[sr][sc];
	if(initial != newColor)
	dfs(sr,sc,initial, newColor, image);

	return image;
}

};