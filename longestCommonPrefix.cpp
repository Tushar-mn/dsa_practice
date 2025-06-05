#include<bits/stdc++.h>
using namespace std;

string prefix(vector<string>& s){
	if(s.empty()) return "";

	string prefix = s[0];
	for(int i=1; i<s.size(); i++){
		int j=0;
		while(j<prefix.size() && j<s[i].size() && prefix[j] == s[i][j]){
			j++;
		}

		prefix = prefix.substr(0, j);
		if(prefix.empty()) return "";
	}
	return prefix;
}

int main(){
	int n;
	cin >> n;

	vector<string> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	cout << prefix(a);
}