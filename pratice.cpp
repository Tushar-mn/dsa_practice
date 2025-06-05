#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
vector<bool> isPrime(N, 1);

void sieve() {
	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i*i < N; i++) {
		if(isPrime[i]) {
			for(int j = i * i; j < N; j += i) {
				isPrime[j] = false;
			}
		}
	}
}

int count(int n){
	int root = sqrt(n);
	return (root * root == n && isPrime[root]);
}

int main() {
	sieve();

	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;

		if(count(n)){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
