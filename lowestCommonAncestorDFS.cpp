#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];
int par[N]; // we store parents here

void dfs(int v, int p=-1){
	par[v] = p; //stored parent here
	for(int child: g[v]){
		if(child == p) continue;
		dfs(child, v);
	}	
}

vector<int> path(int v){
	vector<int> ans;
	while(v != -1){
		ans.push_back(v);
		v = par[v];
	}

	reverse(ans.begin(), ans.end()); //reverse because the element we are storing is 
	// in the form of 6, 5, 2, 1 but we want its reverse to compare from top
	return ans;
}

int main(){
	int n;
	cin >> n;

	for(int i=0; i<n-1; i++){
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}

	dfs(1); //assuming root is 1

	int x1, y1;
	cin >> x1 >> y1;
	vector<int> path_x = path(x1);  //path of x
	vector<int> path_y = path(y1); //path of y
	int min_ln = min(path_x.size(), path_y.size());
	int lca = -1;

	for(int i=0; i<min_ln; i++){
		if(path_x[i] == path_y[i]){
			lca = path_x[i];
		} else {
			break;
		}
	}

	cout << lca << endl;
	return 0;

}