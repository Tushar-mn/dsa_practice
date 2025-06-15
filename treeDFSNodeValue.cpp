#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int subtree_sum[N];
int even_ct[N];

/*
Given Q queries, Q <= 10^5
In each query given V,
Print subtree sum of V & Number of even numbers
in subtree of V
*/
vector<int> g[N];

void dfs(int vertex, int par=0){

	if(vertex%2 == 0){
		even_ct[vertex]++;
	}
	subtree_sum[vertex] += vertex;
	for(int child: g[vertex]){
		if(child == par) continue;

		dfs(child, vertex);

		subtree_sum[vertex] += subtree_sum[child];
		even_ct[vertex] += even_ct[child];
	}
}

int main(){
	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		int x;
		int y;
		cin >> x >> y;

		g[x].push_back(y);
		g[y].push_back(x);
	}

	dfs(1);
	for(int i=0; i<=n; i++){
		cout << subtree_sum[i] << " " << even_ct[i] << endl;
	}
	// int q;
	// cin >> q;

	// while(q--){
	// 	int v;
	// 	cin >> v;

	// 	cout << subtree_sum[v] << " " << even_ct[v] << endl;
	// }

}