#include<bits/stdc++.h>
using namespace std;


int main(){
	int a;
	cin >> a;

	int b;
	cin >> b;

	int n;
	cin >> n;

	vector<int> c(n);
	for(int i=0; i<n; i++){
		cin >> c[i];
	}

	int count = 0;
	vector<int> store;

	for(int i=0; i<c.size(); i++){
		int multi = c[i]*b;
		if(a == 1){
			count += multi;
		}

		if(a>1){
			store.push_back(multi);
		}
	}

	if(a == 1){
		cout << count << endl;
	}

	if(a > 1){
		sort(store.begin(), store.end());

		int lo = 0;
		int hi = store.size()-1;
		int target = store[0];

		while(lo <= hi){
			int mid = lo + (hi - lo)/2;

			target = store[mid];
			lo = mid + 1;
		}
		cout << target << endl;
	}

	return 0;
}