#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n,m;
		cin >> n >> m;

		int total = n+m;

		vector<int> a(total);
		for(int i=0; i<total; i++){
			cin >> a[i];
		}

		set<int> s;
		for(int i=0; i<n; i++){
			s.insert(a[i]);
		}

		for(int i=n; i<total; i++){
			if(s.count(a[i])){
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		}
	}
}