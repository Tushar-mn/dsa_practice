#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> divisor;
	if(n<=2){
		cout << 1 << endl;
		for(int i=0; i<n; i++){
			cout << 1 << " ";
		}
		cout << endl;
		return 0;
	}

	vector<bool> isPrime(n+2, 1);

	isPrime[0] = isPrime[1] = false;

	for(int i=2; i<=n+1; i++){
		if(isPrime[i] == true){
			for(int j=2*i; j<=n+1; j+=i){
				isPrime[j] = false;
			}
		}
	}
	cout << 2 << endl;

	for(int i=2; i<=n+1; i++){
		if(isPrime[i]){
			cout << 1 << " ";
		} else {
			cout << 2 << " ";
		}
	}
	cout << endl;
	return 0;
}