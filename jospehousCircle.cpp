#include<bits/stdc++.h>
using namespace std;

//iterative approach
int josphous(int n, int k){
	int res = 0;
	for(int i=2; i<=n; i++){
		res = (res+k)%i;
	}

	return res+1;
}

int main(){
	int n;
	cin >> n;

	int k;
	cin >> k;

	cout << josphous(n, k);
}