#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
//Adjacency matrix
int graph1[N][N] ; //O(N^2) - space complexity
	// N != 10^5

//Adjacency List
	vector<int, int> graph2[N];
	// O(V+E) - space complexity

int main(){
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

	//i, j connected ? i,j > wt ?
	//Adjacency matrix
	if(graph[i][j] == 1){
		//connected
	}
	graph1[i][j];

	//Adjacency List
	for(int child: graph2[i]){
		if(child.first == j){
			//connected
			child.second
		}
	}
}