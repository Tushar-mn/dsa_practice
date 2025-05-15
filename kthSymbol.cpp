#include<bits/stdc++.h>
using namespace std;

int kthGrammer(int n, int k){
	if(n == 1){
		return 0;
	}

	int parent = kthGrammer(n-1, (k+1)/2);
	bool isKOdd = k%2 == 1;

	if(parent == 0){
		return (isKOdd?0:1);
	} else {
		return (isKOdd?1:0);
	}
}

int main(){
	int n;
	cin >> n;

	int k;
	cin >> k;

	cout << kthGrammer(n,k);
}