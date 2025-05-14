#include<bits/stdc++.h>
using namespace std;

int main(){
	// cout << [](int x, int y){
	// 	return x+y;
	// }(4, 7) << endl;

	// auto sum = [](int x, int y){
	// 	return x+y;
	// };

	// cout<<sum(1,7);

	vector<int> v = {2,4,6};
	cout << all_of(v.begin(), v.end(), 
		[](int x)
		{ 
		return x % 2 == 0;
		}
	) << endl;

	cout << any_of(v.begin(), v.end(),
		[](int x){return x > 0;}) << endl;

	cout << none_of(v.begin(), v.end(), 
		[](int x){return x>0;}) << endl;
}