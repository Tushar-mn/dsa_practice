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

		for(char ch: s){
			freq[ch - 'a']++;
		}

		vector<int> count;
		for(int f: freq){
			if(f>0){
				count.push_back(f);
			}
		}

		long long total = 1;
		for(int c: count){
			total = (total * c)%MOD;
		}

		cout << total << endl;
	}
	return 0;
}