#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
	stack<char> st;
	
	for(char c: s){
		if(c == '(' || c == '{' || c == '['){
			st.push(c);
		} else {
			char top = st.top();
			if(c == ')' && top != '(' ||
				c == ']' && top != '[' ||
				c == '}' && top != '{'
				){
				return false;
			}
			st.pop();
		}
	}
	return st.empty();
}

int main(){
	string s;
	cin >> s;

	cout << isValid(s);
}