#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	set<int> s;
	map<int,int> m;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		s.insert(x);
	}

	// auto it = lower_bound(s.begin(), s.end(), 5);
	auto it = s.lower_bound(5);
	cout << (*it) << endl;

	// int n;
	// cin >> n;
	// int a[n];
	// for(int i=0; i<n; i++){
	// 	cin >> a[i];
	// }

	// sort(a, a+n);

	// for(int i=0; i<n; i++){
	// 	cout << a[i] << " ";
	// }
	// cout << endl;

	// // int *ptr = lower_bound(a, a+n, 5);
	// int *ptr = upper_bound(a, a+n, 5);
	// if(ptr == (a+n)){
	// 	cout << "Not Found";
	// 	return 0;
	// }
	// cout << (*ptr) << endl;

	// int n;
	// cin >> n;
	// vector<int> a(n);
	// for(int i=0; i<n; i++){
	// 	cin >> a[i];
	// }

	// sort(a.begin(), a.end());

	// for(int i=0; i<n; i++){
	// 	cout << a[i] << " ";
	// }
	// cout << endl;

	// // int *ptr = lower_bound(a, a+n, 5);
	// auto it = upper_bound(a.begin(), a.end(), 5);
	// if(it == a.end()){
	// 	cout << "Not Found";
	// 	return 0;
	// }
	// cout << (*it) << endl;
}