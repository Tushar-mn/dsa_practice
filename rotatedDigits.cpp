#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
	return ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch == 'u';
}

vector<string> subset(string s){
	int sz = 1<<s.size();
	vector<string> ans;
	for(int mask=0; mask<sz; mask++){
		string subsets;
		for(int bit=0; bit<s.size(); bit++){
			if(mask&(1<<bit)) subsets.push_back(s[bit]);
		}
		if(subsets.size()) ans.push_back(subsets);
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		string str[n];
		for(int i=0; i<n; i++){
			cin >> str[i];
		}	
		unordered_map<string, int> hsh;
		for(int i=0; i<n; i++){
			set<char> distinct_vw;
			for(char ch: str[i]){
				if(isVowel(ch)){
					distinct_vw.insert(ch);
				}
			}

			string vowel_str;
			for(char ch: distinct_vw){
				vowel_str.push_back(ch);
			}

			vector<string> all_subsets = subset(vowel_str);
			for(string vowel_subset: all_subsets){
				hsh[vowel_subset]++;
			}
		}
		for(auto pr: hsh){
			cout << pr.first << " " << pr.second << endl;
		}
	}
}