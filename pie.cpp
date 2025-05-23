#include<bits/stdc++.h>
using namespace std;

const double PI = acos(-1);
double eps = 1e-6;

bool isPossible(vector<double> &a, double totalPeople, double vol){
	double count = 0;
	for(double v:a){
		count += (int)(v/vol);
	}

	return totalPeople <= count;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		double n;
		double f;
		cin >> n >> f;

		vector<double> radii(n);
		vector<double> volumes(n);

		for(int i=0; i<n; i++){
			cin >> radii[i];
			volumes[i] = PI * radii[i] * radii[i];
		}

		double lo = 0;
		double hi = *max_element(volumes.begin(), volumes.end());
		double ans = -1;

		while(hi - lo > 1){
			double mid = (lo + hi)/2;

			if(isPossible(volumes, f+1 ,mid)){
				ans = mid;
				lo = mid ;
			} else {
				hi = mid;
			}
		}

		cout << lo << endl;
	}
}