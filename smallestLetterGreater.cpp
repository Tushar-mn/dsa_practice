#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<char> letter(n);
	for(int i=0; i<n; i++){
		cin >> letter[i];
	}

	char target;
	cin >> target;

	int lo = 0;
	int hi = letter.size()-1;

	char res = letter[0];

	while(lo <= hi){
		int mid = lo + (hi - lo)/2;

		if(letter[mid] > target){
			res = letter[mid];
			hi = mid - 1;
		} else {
			lo = mid + 1;
		}
	}

	cout << res << endl;

}