#include<iostream>
using namespace std;

int uniqueSubsequences(string s){
	int count = 0;
	char prev = '#';

	for(char c: s){
		if(c != prev){
			count++;
			prev = c;
		}
	}
	return count;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;

		cout << uniqueSubsequences(s) << endl;
	}
}