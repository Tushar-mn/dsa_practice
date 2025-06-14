#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	string s;
	cin >> s;

	vector<int> freq(26);
	int count = 0;

	for(int i=0; i<2*n-1; i++){
		if(i%2 == 0){ 
			freq[s[i] - 'a']++;
		} else {
			int idx = s[i] - 'A';
			if(freq[idx] > 0){
				freq[idx]--;
			} else {
				count++;
			}
		}
	}

	cout << count << endl;
}