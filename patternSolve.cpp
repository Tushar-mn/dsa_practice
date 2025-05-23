#include<bits/stdc++.h>
using namespace std;

bool isEvenOrOdd(int n){
	if(n%2 == 0){
		return true;
	} else {
		return false;
	}
}

int main(){
	int n;
	cin >> n;

	cout << isEvenOrOdd(n);
}