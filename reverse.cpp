#include<bits/stdc++.h>
using namespace std;

int reverse(int x){
	int temp = x;
	int rev = 0;

	while(temp != 0){
		int rem = temp%10;
		rev = rev*10 + rem;

		temp/=10;
	}

	return rev;
}

int main(){
	int n;
	cin >> n;

	cout << reverse(n) << endl;
}