#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	// all of them can also work in arrays
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	int min = *min_element(v.begin(), v.end());
	cout << min << endl;

	int max = *max_element(v.begin(), v.end());
	cout << max << endl;

	int sum = accumulate(v.begin(), v.end(), 0);
	cout << sum << endl;

	int ct = count(v.begin(), v.end(), 6);
	cout << ct << endl;

	auto it = find(v.begin(), v.end(), 2);
	if(it != v.end()){
		cout << *it << endl;
	} else {
		cout << "Element not found" << endl;
	}

	reverse(v.begin(), v.end()); //strings can also reverse
	for(auto val: v){
		cout << val << " ";
	}
	cout << endl;

}