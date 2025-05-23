#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> a(n);
	vector<int> index(n);
	for(int i=0; i<n; i++){
		cin >> a[i];

		if(i == 0){
			index[i] = a[i]; 
		} else {
			index[i] = index[i-1] + a[i];
		}
	}

	int m;
	cin >> m;

	while(m--){
		int q;
		cin >> q;

		int lo = 0;
		int hi = n;
		int ans = -1;

		while(lo <= hi){
			int mid = lo + (hi - lo)/2;

			if(index[mid] >= q){
				ans = mid;
				hi = mid - 1;
			} else {
				lo = mid + 1;
			}
		}

		cout << ans+1 << endl;
	}
}