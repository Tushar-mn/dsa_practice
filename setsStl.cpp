#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	multiset<long long> s;
	while(t--){
		int type;
		long long x;
		cin >> type >> x;

		if(type == 1){
			s.insert(x);
		} else if(type == 2){
			s.erase(x);
		} else if(type == 3){
			auto it = s.find(x);
			if(it != s.end()){
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		}
	}
	return 0;
}