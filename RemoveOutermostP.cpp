#include<bits/stdc++.h>
using namespace std;

string removeOutermostParenthesis(string& s){
	string result;
	int dept = 0;

	for(char c: s){
		if(c == '('){
			if(dept > 0) result += c;
				dept++;	
		} else if(c == ')'){
			dept--;	
			if(dept > 0) result += c;	
		}
	}

	return result;
}

int main(){
	string s;
	cin >> s;

	cout << removeOutermostParenthesis(s);
}