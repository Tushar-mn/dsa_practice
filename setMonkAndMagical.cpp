#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, k;
		cin >> n >> k;
		multiset<long long> s;
		for(int i=0; i<n; i++){
			int candy;
			cin >> candy;

			s.insert(candy);
		}

		long long totalC = 0;
		for(int i=0; i<k; i++){
			auto last_it = (--s.end());
			int candyC = *last_it;
			totalC += candyC;
			s.erase(last_it);
			s.insert(candyC/2);
		}

		cout<< totalC << endl;
	}
}