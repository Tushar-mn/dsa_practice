#include<bits/stdc++.h>
using namespace std;

int countAstrik(string& s){
	int count = 0;
	bool isinside = false;

	for(int i=0; i<s.size(); i++){
		if(s[i] == '|'){
			isinside = !isinside;
		} else if(s[i] == '*' && !isinside){
			count++;
		}
	}
	return count;
}

int main(){
	string s;
	cin >> s;

	cout << countAstrik(s);
}