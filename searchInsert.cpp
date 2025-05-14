#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int target;
	cin >> target;

	sort(a.begin(), a.end());

	auto it = lower_bound(a.begin(), a.end(), target);
	if(it != a.end()){
		cout << (it - a.begin()) << endl;
	} else {
		cout << n << endl;	
	}
}