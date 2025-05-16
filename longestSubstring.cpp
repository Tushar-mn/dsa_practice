#include<bits/stdc++.h>
using namespace std;

int longestSubstring(string s, int k){
	//base case
	if(s.size() == 0){
		return 0;
	}

	unordered_map<char,int> freq[26];
	for(char c: s){
		freq[c - 'a']++;
	}

	for(int i=0; i<s.size(); i++){
		if(freq[s[i]] < k){
			int left = longestSubstring(s.substr(0,i), k);
			int right = longestSubstring(s.substr(i+1), k);

			return max(left, right);
		}
	}
	//if every character occur k times
	return s.size();
} 

int main(){
	string s;
	cin >> s;

	int k;
	cin >> k;

	cout << longestSubstring(s,k);
}