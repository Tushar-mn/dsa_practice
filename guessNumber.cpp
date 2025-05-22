#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int lo = 0;
	int hi = n;

	while(lo <= hi){
		int mid = lo + (hi -lo)/2;
		int res = guess(mid);

		if(res == 0){
			cout << mid << endl;
			break;
		} else if(res < 0){
			lo = mid + 1;
		} else {
			hi = mid - 1;
		}
	}
}