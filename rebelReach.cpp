#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		vector<pair<int,int>> cities(n);
		for(int i=0; i<n-1; i++){
			cin >> cities.first >> cities.second;
		}

		vector<int> guards(n);
		for(int i=0; i<n; i++){
			cin >> guards[i];
		}

		int q;
		cin >> q;
		vector<pair<int,int>> rcity(q);
		for(int i=0; i<q; i++){
			cin >> rcity.first >> rcity.second;
		}
	}
}