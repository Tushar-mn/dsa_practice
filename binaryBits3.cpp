#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i=10; i>=0; i--){
		cout << ((num >> i) & 1);
	}
	cout << endl;
}

int main(){
	 // for(int i=0; i<8; i++){
	 // 	printBinary(i);
	 // 	if(i&1){
	 // 		cout << "odd\n";
	 // 	} else {
	 // 		cout << "even\n";
	 // 	}
	 // } // multiply and divide are generally slow than & and | operators

	// int n = 5;
	// cout << (n>>1) << endl;
	// cout << (n<<1) << endl;

	// (hi+lo) >> 1;
	/*
	divided by 2 and multiply by 2 generally shift the characters

	101 --> (2^2*1 + 2^1 * 0 + 2^0*1)/2
	10 --> (2^1*1 + 2^0*0)

	101 --> (2^2*1 + 2^1 * 0 + 2^0*1)*2 
	1010 --> (2^3*1 + 2^2*0 + 2^1*1 + 2^0*0)
	*/

	// for(char c = 'A'; c <= 'E'; c++){
	// 	cout << c << endl;
	// 	printBinary(int(c));
	// }

	// for(char c = 'a'; c <= 'e'; c++){
	// 	cout << c << endl;
	// 	printBinary(int(c));
	// }

	// char A = 'A';
	// char a = A | (1<<5);
	// cout << a << endl;
	// cout << (a & (~(1<<5))) << endl;
	// printBinary(int(' '));
	// cout << char(1 << 5);
	// cout << ('c'|' ') << endl;


	// char B = 'B';
	// //uppercase to lowercase
	// char b = B | ' ';
	// cout << b << endl;
	// //lowercase to uppercase
	// char d = 'd';
	// char D = (d&'_');

	// cout << D << endl;

	// printBinary(59);
	// int a = 59;
	// int i = 4;
	// // cout << a&(~((1<<(i+1) - 1))) << endl;
	// int b = a&(~((1<<(i+1) - 1)));
	// printBinary(b);
	// i = 3;
	// int c = (a & ((1<<(i+1)-1)));
	// printBinary(c);
}