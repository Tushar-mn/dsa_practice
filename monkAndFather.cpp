#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int x;
		cin >> x;

		cout << __builtin_popcountll(x) << endl;
	}
}