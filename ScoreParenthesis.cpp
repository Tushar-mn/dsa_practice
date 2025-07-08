#include<bits/stdc++.h>
using namespace std;

int scoreParenthesis(string s){
	stack<char> st;
	int count = 0;

	for(char c: s){
		if(c == '('){
			st.push(c);
		} else {
			st.pop();
		}

		count++;
	}

	// string s2;
	// while(!st.empty()){
	// 	s2 += st.top();
	// 	st.pop();
	// }

	// reverse(s2.begin(), s2.end());


	return count/2;
}

int main(){
	string s;
	cin >> s;

	cout << scoreParenthesis(s);
}