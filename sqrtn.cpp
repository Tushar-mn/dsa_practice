#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int lo = 1;
	int hi = n;

	int res = 1;

	while(hi > lo){
		int mid = lo + (hi - 1)/2;

		if(mid*mid < x){
			res = mid;
			lo = mid + 1;
		} else {
			hi = mid - 1;
		}
	}

	cout << res << endl
}