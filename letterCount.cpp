#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;

	vector<int> freq(256,0);
	for(char ch: s){
		freq[(int)ch]++;
	}

	char max_char = 0;
	int max_freq = 0;

	for(int i=0; i<256; i++){
		if(freq[i] > max_freq){
			max_freq = freq[i];
			max_char = (char)i;
		}
	}
	cout << max_char << endl;
}