#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
bool vis[N];

bool dfs(int vertex, int par){

	vis[vertex] = true;
	bool isLoopExist = false;
	for(int child: g[vertex]){
		if(vis[child] && child == par) continue;
		if(vis[child]) return true;

		isLoopExist |= dfs(child, vertex);
	}

	return isLoopExist;
}

int main(){
	int n, m;
	cin >> n >> m;

	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;

		g[x].push_back(y);
		g[y].push_back(x);
	}

 bool isLoopExist = false;
 for(int i=0; i<=n; i++){
 	if(vis[i]) continue;
 	if(dfs(i, 0)){
 		isLoopExist = true;
 		break;
 	}
 }

 cout << isLoopExist << endl;
}