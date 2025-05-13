#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b){
	if(a.second != b.second){
		return a.second > b.second;
	}
	return a.first < b.first;
}

int main(){
	int n;
	cin >> n;
	vector<pair<string,int>> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i].first >> a[i].second;
	}

	sort(a.begin(), a.end(), cmp);

	for(int i=0; i<n; i++){
		cout << a[i].first << " " << a[i].second << endl;
	}
}