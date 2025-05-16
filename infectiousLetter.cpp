#include<bits/stdc++.h>
using namespace std;

int infectiousLetter(string s){
	bool changed = true;

	while(changed){
		changed = false;
		string next = s;
		for(int i=0; i<s.size(); i++){
			if(s[i] != 'a' && s[i] != 'b'){
				if(((i>0) && s[i-1] == 'a') || ((i<s.size()-1) && s[i+1] == 'a')){
					next[i] = 'a';
					changed = true;
				}
			}
		}
		s = next;
	}
	return count(s.begin(), s.end(), 'a');
}

int main(){
	int n;
	cin >> n;

	string s;
	cin >> s;

	int count = infectiousLetter(s);
	cout << count << endl;
}