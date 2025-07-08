#include<bits/stdc++.h>
using namespace std;

string processString(string s){
	stack<char> st;
	string s1;

	for(int i=0; i<s.size(); i++){
		if(!st.empty() && s[i] == '#'){
			st.pop();
		} else {
			st.push(s[i]);
		}
	}

	while(!st.empty()){
		s1+=st.top();
		st.pop();
	}

	reverse(s1.begin(), s1.end());
	return s1;
}

bool backspaceCompare(string s1, string s2){
	return processString(s1) == processString(s2);
}

int main(){
	string s1;
	cin >> s1;

	string s2;
	cin >> s2;

	cout << backspaceCompare(s1, s2);
}