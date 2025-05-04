#include<bits/stdc++.h>
using namespace std;

void printVec(vector<string> v){
	cout<< "size:" << v.size() <<endl;
	for(int i=0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout << endl;
}

int main(){
	// vector<int> v;
	// int n;
	// cin >> n;
	// for(int i=0; i<n; i++){
	// 	int x;
	// 	cin>>x;
	// 	printVec(v);
	// 	v.push_back(x);
	// }
	// printVec(v);
	// vector<int> v;
	// v.push_back(7);
	// v.push_back(6); //O(1)
	// v.pop_back();

	// vector<int> v2 = v; //O(n) //we can change the vectors
	// v2.push_back(5);
	// printVec(v);
	// printVec(v2);

	vector<string> v;
	int n;
	cin >> n;
	for(int i=0; i < n; i++){
		string s;
		cin >> s;
		v.push_back(s);
	}
	printVec(v);
}