#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int m;
	cin >> m;

	vector<vector<int>> a(n, vector<int>(m));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i];
		}
	}

	int count = 0;
	int cols = a.size();
	for(auto val: a){
		int lo = 0;
		int hi = cols;

		while(lo <= hi){
			int mid = lo + (hi - lo)/2;

			if(a[mid] < 0){
				hi = mid - 1;
			} else {
				lo = mid + 1;
			}

			count += cols - lo;
		}
	}

	cout << count << endl;

}