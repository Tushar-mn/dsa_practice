#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

//binary numbers - containing 1s and 0s
/* 
	0 - 0
	1 - 1
	2 - 10
	3 - 11
	4 - 100
	5 - 101
	6 - 110
	7 - 111
*/

int main(){
	cout << INT_MAX << endl;
	int a = (1LL << 32) - 1; //store both positive and negative numbers

	cout << a << endl;
	unsigned int b = (1LL<<32) - 1; //only store positive numbers

	cout << b << endl;
}