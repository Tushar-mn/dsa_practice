#include<bits/stdc++.h>
using namespace std;

bool check(const vector<int>& a){
	unordered_set<int> s;

	for(int val: a){
		if(s.count(2*val) || s.count(val/2) && val%2 == 0){
			return true;
		}
		s.insert(val);
	}
	return false;
}

int main(){
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	cout << check(a);
}