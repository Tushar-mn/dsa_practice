#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	if(n & (n-1)){
		cout << "not power of 2";
	} else {
		cout << "power of 2";
	}
} 