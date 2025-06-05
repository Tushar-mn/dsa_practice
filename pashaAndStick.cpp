#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int answer = 0;

	if(n%2 == 0){
		int half = n/2;
		answer = (half-1)/2;
	}

	cout << answer;
	return 0;
}