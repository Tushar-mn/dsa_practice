#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> digits(n);
	for(int i=0; i<n; i++){
		cin >> digits[i];
	}

	for(int i=n-1; i>=0; i--){
		if(digits[i]<9){
			digits[i]++;
			for(int d: digits){
				cout << d << " ";
			}
			cout << endl;
			return 0;
		}
		digits[i] = 0;
	}

	//if all elements 9 then this special case will help
	digits.insert(digits.begin(), 1);
	for(int i=0; i<digits.size(); i++){
		cout << digits[i] << " ";
	}
	cout << endl;
}