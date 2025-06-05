#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> lo(n);

	vector<bool> isPrime(n,1);
	vector<int> divisor;

	isPrime[0] = isPrime[1] = false;
	for(int i=2; i<=n; i++){
		if(isPrime[i] == true){
			for(int j=2*i; j<=n; j+=i){
				isPrime[j] = false;
				if(lo[j] == 0){
					lo[j] = i;
				}
			}
			divisor.push_back(i);
		}
	}

	for(int i: lo){
		cout << i << endl;
	}
}