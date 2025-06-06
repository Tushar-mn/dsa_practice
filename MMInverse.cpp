#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;

int bitexp(int a, int b, int m){
	int ans = 1;
	while(b>0){
		if(b&1){
			ans = (ans * 1LL * a)%m;
		}

		a = (a * 1LL * a)%m;
		b>>=1;
	}
	return ans;
}

/*
there are N children and K toffees. K<N 
count the number of ways ti distribute toffee
among N students (nck combination) M = 10^9+7 
N < 10^9, k < N < 10^9

n! / ((n-r)! * r!)
*/

const int N = 1e6+10;
int fact[N];
int main(){
	// int a;
	// cin >> a;

	// cout << bitexp(a, M-2, M);
	fact[0] = 1;
	for(int i=1; i<N; i++){
		fact[i] = (fact[i-1] * 1LL * i)%M;
	}

	int q;
	cin >> q;
	while(q--){
		int n,k;
		cin >> n,k;
		int ans = fact[n];
		int den = (fact[n-k] * 1LL * fact[k])%M;

		ans = ans * bitexp(den, M-2, M);
		cout << ans << endl;
	}
}