#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
	if(b==0){
		return a;
	}
	return GCD(b, a%b);
}

int main(){
	int a;
	cin >> a;

	int b;
	cin >> b;

	cout << GCD(a,b);
}