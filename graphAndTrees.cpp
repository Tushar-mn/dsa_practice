#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
int graph1[N][N] ; //O(N^2) - space complexity
	// N != 10^5

	vector<int, int> graph2[N];
	// O(V+E) - space complexity
int main(){
	//Adjacency matrix
	int n, m;
	cin >> n >> m;

	for(int i=0; i<m; i++){
		int v1, v2;
		cin >> v1 >> v2;
		// graph1[v1][v2] = 1;
		// graph1[v2][v1] = 1;
		graph1[v1][v2] = wt;
		graph1[v2][v1] = wt;

		graph2[v1].push_back(v2, wt);
		graph1[v2].push_back(v1, wt);
	}	
}