#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;

int main(){
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		vector<int> freq(26, 0);

		//update frequency for each character							
		for(char ch: s){
			freq[ch - 'a']++;
		}

		//we care only about character appaear only once
		vector<int> count;
		for(int f: freq){
			if(f>0){
				count.push_back(f);
			}
		}
		//each character with frequency c gives c choices - multiply them together for total combinations
		long long total = 1;
		for(int c: count){
			total = (total * c)%MOD;
		}

		cout << total << endl;
	}
	return 0;
}