//specific
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >>  a[i];
	}

	int x;
	cin >> x;

	int count = 0;
	for(int i=0; i<a.size(); i++){
		if(a[i] == x){
			count++;
		}
	}

	cout << count << endl;
}