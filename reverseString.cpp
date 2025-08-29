#include<bits/stdc++.h>
using namespace std;

int reverseInteger(int n){
	int temp = n;
	int res = 0;

	while(temp != 0){
		int rem = temp%10;
		res = res*10+rem;

		temp/=10;
	}

	return res;
}

int main(){
	int n;
	cin >> n;

	cout << reverseInteger(n);
}