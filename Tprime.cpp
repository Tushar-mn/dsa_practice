#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e6+5;
vector<long long> tprimes;

void sieve(){
	vector<bool> isPrime(MAX, true);
	isPrime[0] == isPrime[1] == false;

	for(int i=2; i*i <= MAX; i++){
		if(isPrime[i]){
			for(int j=i*i; j<MAX; j+=i){
				isPrime[j] = false;
			}
		}
	}

	for(int i=2; i<MAX; i++){
		if(isPrime[i]){
			tprimes.push_back((1LL)*i*i);
		}
	}
}

int main(){
	sieve();

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin >> a[i];
		}

		int lo = 0;
		int hi = tprimes.size()-1;
		bool found = false;

		while(lo <= hi){
			int mid = lo + (hi - lo)/2;

			if(tprimes[mid] == 3){
				found = true;
			} else if(tprimes[mid] < 3){
				lo = mid + 1;
			} else {
				hi = mid - 1;
			}
		}

		if(!found){
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
}