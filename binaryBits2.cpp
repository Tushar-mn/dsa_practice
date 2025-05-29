#include<bits/stdc++.h> 
using namespace std;

void printBinary(int num){
	for(int i=10; i>=0; i--){
		cout << ((num >> i) & 1); //right shift
	}
	cout << endl;
}

int main(){
	printBinary(9);
	//output - 00000001001

	int a = 9;
	int i = 1;

	if((a & (1<<i)) != 0){ //left shift
		cout << "set bit\n";
	} else {
		cout << "not set bit\n";
	} 

	//bit set
	printBinary(a | (1 << 1));
	//output - 00000001011

	//unset   
	/*
	 	000"1"001
	 |	111"0"111
	 	000"0"001
	*/
	// ~ tilda reverse the binary numbers (0 will become 1 and 1 will become 0)
	printBinary(a & ~(1<<i));
	//output - 00000001001

	//toggle - 0 ko one banana and 1 ko 0
	printBinary(a^(1<<2));
	//output - 00000001101
	printBinary(a^(1<<3));
	//output - 00000000001

	int ct = 0;
	for(int i=31; i>=0; i--){
		if((a & (1 << i)) != 0){
			ct++;
		}
	}

	cout << ct << endl;

	cout << __builtin_popcount(a) << endl;
	//cout << __builtin_popcount((1LL<<35)-1) << endl;

}