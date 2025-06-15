#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];
int par[N];

void dfs(int v, int p=-1){
	for(int child: g[v]){
		if(child == par) continue;
		dfs(child, v);
	}	
}

vector<int> path(int v){
	vector<int> ans;
	while(v != -1){
		ans.push_back(v);
		v = par[v];
	}
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
}