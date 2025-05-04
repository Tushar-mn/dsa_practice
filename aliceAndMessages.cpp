#include<bits/stdc++.h>
using namespace std;

string encode(string s){
	for(char &c: s){
		c = 'z' - (c - 'a');
	}
	return s;
}

int findMessages(int N, vector<string> A){
	vector<bool> visited(N, false);
	int count = 0;

	for(int i=0; i<N; i++){
		if(visited[i])
			continue;

		string encoded = encode(A[i]);

		bool found = false;

		for(int j=i+1; j<N; j++){
			if(!visited && A[j] == encoded){
				visited[j] = true;
				found = true;
				break;
			}
		}
		visited = true;
		count++;
	}
	return count;
}

int main(){
	int N;
	cin >> N;

	vector<string> s[N];
	for(int i=0; i<N; i++){
		cin >> s[i];
	}

	int out;
	out = findMessages(N, s);
	cout<<out<<endl;

	return 0;
}