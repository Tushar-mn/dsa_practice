#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		int res = 0;

		while(n != 0){
			int r = n%10;
			res += r;

			n/=10;
		}

		cout<<res<<endl;
	}


}