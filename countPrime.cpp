#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> divisor;

int main(){
	int n;
	cin >> n;
	int count = 0;

	if(n == 0 || n == 1){
		cout << 0 << endl;
	}

	vector<bool> isPrime(N, 1);

	isPrime[0] = isPrime[1] = false;
	for(int i=2; i<n; i++){
		if(isPrime[i] == true){
			for(int j=i; j<n; j+=i){
				isPrime[j] = false;
			}
			divisor.push_back(i);
		}
	}

	for(int i: divisor){
		cout << i << " ";
		count++;
	}

	cout << count <<endl;
}