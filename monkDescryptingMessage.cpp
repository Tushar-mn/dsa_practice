#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int a[N];
int hp[N];
int canRemove[N]; //if i can be removed
int hsh[N];

vector<int> DistinctPF(int x){
	vector<int> ans;
	while(x>1){
		int pf = hp[x];
		ans.push_back(pf);
		while(x%pf == 0){
			x /= pf;	
		}
	}
	return ans;
}

int main(){
	for(int i=2; i<N; i++){
		if(hp[i] == 0){
			for(int j=i; j<N; j+=i){
				hp[j] = i;
			}
		}
	}

	int n, q;
	cin >> n >> q;

	for(int i=0; i<n; i++){
		int x; 
		cin >> x;
		hsh[x]=1;
	}

	for(int i=2; i<N; i++){
		if(hsh[i]){
			for(long long j=i; j<N; j*=i){
				canRemove[j] = 1;
			}
		}
	}

	while(q--){
		int x;
		cin >> x;

		vector<int> pf = DistinctPF(x);
		bool isPossible = false;
		for(int i=0; i<pf.size(); i++){
			for(int j=i; j<pf.size(); j++){
				int product = 1LL * pf[i] * pf[j];
				if(i == j && x % product != 0) continue;
				int toRemove = x/product;
				if(canRemove[toRemove] == 1 || toRemove == 1){
					isPossible = true;
					break;
				}
			}
			if(isPossible) break;
		}
		cout << (isPossible ? "YES\n" : "NO\n");
	}
}