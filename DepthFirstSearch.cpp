#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
bool vis[N];

bool dfs(int vertex){
	//Take action on vertex after entering the vertex
	//for(int child: g[vertex]){
	//if(vis[vertex]) return;
	vis[vertex] = true;
	for(int child: g[vertex]){
		//take action action on child before entering the child node
		// cout << "par" << vertex << "child" << child << endl;
		if(vis[child]) continue;

		dfs(child);
		//take action on child after exiting child node
	}
	//take action in vertex before exiting the vertex
}
//O(V+E)

int main(){
	int n,m;
	cin >> n >> m; //n -> vertices , m -> edges
	for(int i=0; i<9; i++){
		int v1, v2;
		cin >> v1, v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}
}