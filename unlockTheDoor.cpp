#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
const int N = 1e5+10;
int fact[N];

int binexp(int a, int b, int m){
	int ans = 1;
	while(b>0){
		if(b&1){
			ans = (ans * 1LL * a)%m;
		}

		a = (a * 1ll * a)%m;
		b >>= 1;
	}
	return ans;
}

int main(){
	int t;
	cin >> t;

	fact[0] = 1;
	for(int i=1; i<N; i++){
		fact[i] = (fact[i-1] * 1LL * i)%M;
	}

	while(t--){
		int n;
		cin >> n;

		int k;
		cin >> k;

		int ans = fact[n];
		ans = (ans * 1LL * fact[k])%M;

		int den = (fact[k-n]*1LL*fact[n])%M;
		ans = (ans * 1LL * binexp(den, M-2, M))%M;
		cout << ans << endl; 
	}
}