#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int p;
	cin >> p;

	int lo = 0;
	int hi = n;
	int found = false;

	while(lo <= hi){
		int mid = lo + (hi - lo)/2;
		if(mid == p){
			cout << mid << endl;
			break;
		} else if(mid < p){
			lo = mid + 1;
		} else {
			hi = mid - 1;
		}
	}
}