#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &a){
	sort(a.begin(), a.end());
	int lo = 0;
	int hi = a.size()-1;

	while(lo < hi){
		int mid = (lo+hi)/2;

		if(a[mid] > mid){
			hi = mid;
		} else {
			lo = mid + 1;
		}
	}
	return lo;
}

int main(){
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	cout << missingNumber(a);

}