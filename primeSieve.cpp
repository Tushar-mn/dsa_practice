#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;

vector<bool> isprime(N, 1);

// int sieve(){
// 	isprime[0] = isprime[1] = false;
// 	for(int i=2; i<N; i++){
// 		if(isprime[i] == true){
// 			for(int j=2*i; j<N; j+=i){
// 				isprime[j] = false;
// 			}
// 		}
// 	}
// }

int main(){
	//time complexity = O(1)
	isprime[0] = isprime[1] = false;
	for(int i=2; i<N; i++){
		if(isprime[i] == true){
			for(int j=2*i; j<N; j+=i){
				isprime[j] = false;
			}
		}
	}

	int q;
	cin >> q;
	while(q--){
		int num;
		cin >> num;
		 if(isprime[num]){
		 	cout << "prime\n";
		 } else {
		 	cout << "not prime\n";
		 }
	}
}