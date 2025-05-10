#include<bits/stdc++.h>
using namespace std;

struct cmp{
	bool operator() (const pair<int, string>&a, const pair<int, string> &b) const{
		if(a.first != b.first)
			return a.first > b.first;
		return a.second < b.second;
	}
};

int main(){
	int n;
	cin >> n;

	set<pair<int, string>, cmp> s;
	for(int i=0; i<n; i++){
		string str;
		int score;
		cin >> str >> score;

		s.insert({score, str});
	}


	for(auto it: s){
		cout << it.second << " " << it.first<< endl;
	}

	return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// // Custom comparator for sorting by score descending, then name ascending
// struct cmp {
//     bool operator()(const pair<int, string>& a, const pair<int, string>& b) const {
//         if (a.first != b.first)
//             return a.first > b.first;  // Higher score comes first
//         return a.second < b.second;    // Lexicographical order for names
//     }
// };

// int main() {
//     int n;
//     cin >> n;

//     set<pair<int, string>, cmp> s;  // Store (score, name)

//     for (int i = 0; i < n; ++i) {
//         string str;
//         int score;
//         cin >> str >> score;
//         s.insert({score, str});
//     }

//     for (auto it : s) {
//         cout << it.second << " " << it.first << endl;  // Print name then score
//     }

//     return 0;
// }
