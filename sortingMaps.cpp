#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<T1, T2> &a, const pair<T1, T2> &b){
	return a.second < b.second;
}

void sortByValue(const map<string, int> &m){
	vector sort<pair<string, int>> A(m.begin(), m.end());

	sort(A.begin(), A.end(), cmp);

	for(const auto &it: A){
		cout << it.first << ' ' << it.second << endl;
	}
}

int main(){
	map<string, int> m;
	int n;
	cin >> n; 

	for(int i=0; i<n; i++){
		string s;
		int val;
		cin >> s >> val;

		m[s] = val;
	}

	sortByValue(m);
	return 0;
}