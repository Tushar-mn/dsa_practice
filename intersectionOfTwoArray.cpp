#include<bits/stdc++.h>
using namespace std;
vector<int> inter;

void intersection(vector<int>& a1, vector<int> & a2){
	unordered_set<int> s(a2.begin(), a2.end());

	for(int val: a1){
		if(s.count(val)){
			inter.push_back(val);
			s.erase(val);
		}
	}
}

int main(){
	int n1;
	cin>>n1;
	vector<int> a1(n1);
	for(int i=0; i<n1; i++){
		cin >> a1[i];
	}

	int n2;
	cin >> n2;
	vector<int> a2(n2);
	for(int i=0; i<n2; i++){
		cin >> a2[i];
	}

	intersection(a1,a2);
	for(int i:inter){
		cout << i << endl;
	}
}