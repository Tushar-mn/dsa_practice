#include <bits/stdc++.h>
using namespace std;

int longestSubstring(string s){
	unordered_set<int> peek;
	int left = 0;
	int maxlen = 0;

	for(int i=0; i<s.size(); i++){
		while(peek.count(s[i])){
			peek.erase(s[left]);
			left++;
		}

		peek.insert(s[i]);
		maxlen = max(maxlen, i-left+1);
	}

	return maxlen;
}

int main(){
	string s;
	cin >> s;

	cout << longestSubstring(s);
}