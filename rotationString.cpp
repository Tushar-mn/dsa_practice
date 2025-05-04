#include<bits/stdc++.h>
using namespace std;

int rotation(string a, string b){
	int n = a.length();
	for(int i=0; i<n; i++){
		if(a.substr(i) == b.substr(0, n-i)){
			return i;
		}
	}

	return n;
}

int main(){
	int n;
	cin >> n;

	string a, b;
	cin >> a >> b;

	cout << rotation(a, b);
}