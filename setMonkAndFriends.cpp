#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		long long N, M;
		cin >> N >> M;

		long long total = N+M;
		vector<long long> a(total);
		for(int i=0; i<total; i++){
			cin >> a[i];
		}

		// from N
		set<long long> s;
		for(int i=0; i<N; i++){
			s.insert(a[i]);
		}

		// from M
		for(int i=N; i<total; i++){
			if(s.count(a[i])){
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}

			s.insert(a[i]);
		}
	}
	return 0;
}