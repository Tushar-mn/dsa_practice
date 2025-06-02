#include<bits/stdc++.h>
using namespace std;
const int M = 1e7+7;

int bitMulti(int n, int k){
	int ans = 1;
	while(k > 0){
		if(k&1){
			ans = (ans * 1LL * n)%M;
		}

		n = (n * 1LL * n)%M;
		k >>= 1;
	}
	return ans;
}

int bititr(int n, int k){
	int ans = 0;
	while(k > 0){
		if(k&1){
			ans = (ans + n)%M;
		}

		n = (n + n)%M; 
		k >>= 1;
	}
	return ans;
}

int selfPower(int n, int k){
	int sum = 0;
	for(int i=1; i<=n; i++){
		sum = (sum + bitMulti(i, k))%M;
	}

	return sum;
}

int powerSum(int n){
	int sum = 0;
	for(int i=1; i<=n; i++){
		sum = (sum + bitMulti(i, i))%M;
	}
	return sum;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int k;
		cin >> k;

		int sn = selfPower(n, k);
		int snminone = selfPower(n-1, k);
		int snmintwo = selfPower(n-2, k);
		int pn = powerSum(n);
		int pnminone = powerSum(n-1);
		int pnmintwo = powerSum(n-2);

		int zn = (sn + pn)%M;
		int znminusone = (snminone + pnminone)%M;
		int znminustwo = (snmintwo + pnmintwo)%M;

		int sum = (zn + (znminusone - (2 * znminustwo)))%M;
		if(sum < 0){
			sum += M;
		}

		cout << sum << endl;
	}
}