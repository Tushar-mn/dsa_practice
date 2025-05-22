#include<bits/stdc++.h>
using namespace std;

double eps = 1e-6; //accuracy

int main(){
	double n;
	cin >> n;

	double lo = 1;
	double hi = n;

	while(hi - lo > eps){
		double mid = lo + (hi - lo)/2;
		double square = mid * mid;

		if(square < n){
			lo = mid;
		} else {
			hi = mid;
		}
	}

	cout << lo << endl;
}