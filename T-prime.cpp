#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
vector<bool> isPrime(N,1);
vector<int> divisor;

void sieve(){
	isPrime[0] = isPrime[1] = false;
	for(int i=2; i*i<N; i++){
		if(isPrime[i] == true){
			for(int j=i*i; j<N; j+=i){
				isPrime[j] = false;
			}
		}
	}

	for(int i=2; i<N; i++){
		if(isPrime[i]){
			divisor.push_back(i);
		}
	}
}

int count(int n){
	int c = 0;
	for(int val: divisor){
		if(val*val > n)break;
		if(n%val == 0){
			c++;
			while(n%val == 0){
				n/=val;
			}
		}
	}
	if(n>1) c++;
	return c;
}

int main(){
	sieve();

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		bool found = false;

		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}

		for(int i=0; i<a.size(); i++){
			int c = count(a[i]);
			if(c == 3) {
				found = true;
				break;
			}
		}

		if(found){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}