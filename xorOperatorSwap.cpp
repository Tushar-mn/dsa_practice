#include<bits/stdc++.h>
using namespace std;

/*
Given array a of n integers. All integers are
present in event count except one. find that one
integer which has odd count int O(N) time complexity
and O(1) space;
n < 10^5
a[i] < 10^5

*/

int main(){
	// int a = 4;
	// int b = 6;

	// // 1 0 -- > 1
	// // 0 1 -- > 1
	// // 0 0 -- > 0
	// // 1 1 -- > 0

	// // 101
	// // 101
	// // 000

	// a = a ^ b;

	// b = b ^ a; // b --> a

	// // b = b ^ (a ^ b) ==> b ^ b ^ a

	// // x ^ y ^ z == x ^ z ^ y == y ^ x ^ z

	// a = a ^ b; // a --> b
	// // a = (a^b)^a ==> a^a^b --> b


	// cout << a << " " << b << endl;

	// c^a^b^c^b --> c^a^c^b^b
	// --> c^a^c
	// --> c^c^a
	// --> 0^a --> a
	int n;
	cin >> n;
	int x;
	int ans = 0;
	for(int i=0; i<n; i++){
		cin >> x;
		ans ^= x;
	}

	cout << ans << endl; 
}