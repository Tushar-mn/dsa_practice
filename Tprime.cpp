#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e6+5;
vector<long long> tprimes(MAX);

void sieve(){
	vector<bool> isPrime(MAX, true);
	isPrime[0] = isPrime[1] = false;

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

bool isPrime(long long x){
	long long lo = 0;
	long long hi = tprimes.size()-1;

	while(lo <= hi){
		long long mid = lo + (hi - lo)/2;
		if(tprimes[mid] == x){
			return true;
		} else if(tprimes[mid] < x){
			lo = mid + 1;
		} else {
			hi = mid - 1;
		}
	}
	return false;
}

int main(){
	sieve();

	long long n;
	cin >> n;

	vector<long long> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	for(int i=0; i<a.size(); i++){
		if(isPrime(a[i])){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}