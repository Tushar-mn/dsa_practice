#include<bits/stdc++.h>
using namespace std;

int main(){
	unordered_map<string, int> m;
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		string s;
		cin >> s;

		m[s]++;
	}

	int count = 0;
	for(auto &sr: m){
		if(sr.second == 2){
			count++;
		}
	}

	return count;
}