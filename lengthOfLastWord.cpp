#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);

	int n = s.size();
	int length = 0;

	while(n>=0 && s[n] == ' '){
		n--;
	}

	while(n>=0 && s[n] != ' '){
		length++;
		n--;
	}

	cout << length;
}