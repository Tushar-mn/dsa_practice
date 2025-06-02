#include<bits/stdc++.h>
using namespace std;
const int M = 1337;

int bitMul(int a, int b, int m){
	int ans = 1;
	while(b > 0){
		if(b&1){
			ans = (ans * 1LL * a)%m;
		}
		a = (a * a)%m;
		b >>= 1;
	}
	return ans;
}

int main(){
	int a;
	cin >> a;

	int n;
	cin >> n;

	vector<int> b(n);
	for(int i=0; i<n; i++){
		cin >> b[i];
	}

	int bmod = 0;

	//for arrays
	for(int val: b){
		bmod = (bmod*10 + val)%1140;
	}

	cout << bitMul(a, bmod, M);
}