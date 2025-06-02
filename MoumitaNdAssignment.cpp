#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7; 

int 

int bitMultiply(int a, int b){
	int ans = 0;
	while(b>0){
		if(b&1){
			ans = (ans + a)%M;
		}
	}

	a = (a + a)%10;
	b >>= 1;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
	}
}