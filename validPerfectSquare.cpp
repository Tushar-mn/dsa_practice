#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int lo = 0;
	int hi = n;

	bool found = false;

	while(lo <= hi){
		int mid = lo + (hi - lo)/2;
		int square = mid*mid;

		if(square == n){
			found = true;
			break;
		} else if(square < n){
			lo = mid + 1;
		} else {
			hi = mid - 1;
		}
	}

	if(found){
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}
}