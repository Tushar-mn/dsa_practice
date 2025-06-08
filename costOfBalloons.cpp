#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int costGreen;
		cin >> costGreen;

		int costPurple;
		cin >> costPurple;

		int n;
		cin >> n;

		int countG = 0;
		int countP = 0;

		for(int i=0; i<n; i++){
			int x;
			int y;

			cin >> x >> y;

			countG += x;
			countP += y;
		}

		int cost1 = (costGreen * countG) + (costPurple * countP);
		int cost2 = (costGreen * countP) + (costPurple * countG);

		cout << min(cost1, cost2) << endl;
	}
}