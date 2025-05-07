#include <bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
	cout << m.size() << endl;
	for(auto &pr : m){
		cout << pr.first << " " << pr.second << endl;
	}
}

int main(){
	map<int, string> m;
	m[1] = "abc"; // Olog(n)
	m[2] = "cdc";
	m[3] = "acd";
	m.insert({4, "afg"});
	m[6] = "a";
	m[5] = "cde";// cannot repeat !!
	auto it = m.find(5); // O(log(n))
	if(it != m.end()){
		m.erase(it);
	} //O(log(n)) we cannot give a iterator which is not present
	// m.clear(it);
	// if(it == m.end()){
	// 	cout << "NO value";
	// } else {
	// 	cout << (*it).first << " " << (*it).second << endl;

	// }
	print(m);

	// map<int,string> :: iterator it;
	// for(it = m.begin(); it != m.end(); it++){
	// 	cout << (*it).first << " " << (*it).second << endl;
	// }
}