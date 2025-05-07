#include<bits/stdc++.h>
using namespace std;
void print(multiset<string> &s){
	for(string value: s){
		cout << value << endl;
	}

	// for(auto it = s.begin(); it != s.end(); it++){
	// 	cout<<(*it)<<endl;
	// }
}

//SETS

//it stores unique elements and will be stored in sorted manner

// int main(){
// 	set<string> s;    
// 	s.insert("abc"); //Olog(n)
// 	s.insert("zsdf");
// 	s.insert("bcd");
// 	s.insert("abc");

// 	// auto it = s.find("abc");
// 	// if(it != s.end()){
// 	// 	s.erase(it);
// 	// }
// 	s.erase("abc");
// 	print(s);
// }

//UNORDERED SETS

// int main(){
// 	unordered_set<string> s;  //same differentiation as of unordered maps  
// 	s.insert("abc"); //O(1)
// 	s.insert("zsdf");
// 	s.insert("bcd");
// 	s.insert("abc");

// 	// auto it = s.find("abc");
// 	// if(it != s.end()){
// 	// 	s.erase(it);
// 	// }
// 	s.erase("abc");
// 	print(s);
// }


//MULTISETS
int main(){
	multiset<string> s;//o(log(n))
	s.insert("abc");
	s.insert("zsdf");
	s.insert("bcd");
	s.insert("abc");

	// auto it = s.find("abc"); //o(log(n))
	// if(it != s.end()){
	// 	s.erase(it);
	// }
	s.erase("abc");
	print(s);
}