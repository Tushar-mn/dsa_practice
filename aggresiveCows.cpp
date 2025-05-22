// #include<bits/stdc++.h>
// using namespace std;

// bool cows(vector<int>& a, int c, int t){
// 	int count = 1;
// 	int last = a[0];

// 	for(int i=1; i<a.size(); i++){
// 		if(a[i] - last >= t){
// 			count++;
// 			last = a[i];
// 		}
// 	}

// 	return count >= c;
// }

// int main(){
// 	int t;
// 	cin >> t;

// 	while(t--){
// 		int n,c;
// 		cin >> n >> c;
	
// 		// if (c > n) {
// 		// 	cout << "Invalid input: cows > stalls\n";
// 		// 	return 0;
// 		// }
		
// 		vector<int> a(n);
// 		for(int i=0; i<n; i++){
// 			cin >> a[i];
// 		}
	
// 		sort(a.begin(), a.end());
	
// 		int lo = 1;
// 		int hi = a[n-1] - a[0];
// 		int ans = 0;
	
// 		while(lo <= hi){
// 			int mid = lo + (hi - lo)/2;
// 			if(cows(a, c, mid)){
// 				ans = mid;
// 				lo = mid + 1;
// 			} else {
// 				hi = mid - 1;
// 			}
// 		}
// 		cout << ans << endl;
// 		return 0;
// 	}
// }
#include<bits/stdc++.h>
using namespace std;

bool cows(vector<int>& a, int c, int t){
	int count = 1;
	int last = a[0];
	
	for(int i=1; i<a.size(); i++){
		if(a[i] - last >= t){
			count++;
			last = a[i];
		}
	}
	
	return count >= c;
}

int main(){
	int t;
	cin >> t;
	
	while(t--){
		int n;
		int c;
		cin >> n >> c;
		
		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		sort(a.begin(), a.end());
		
		int lo=1;
		int hi=a[n-1]-a[0];
		int ans = -1;
		
		while(lo <= hi){
			int mid = lo + (hi-lo)/2;
			
			if(cows(a,c,mid)){
				ans = mid;
				lo = mid + 1;
			}else{
				hi = mid - 1;
			}
		}
		
		cout << ans << endl;
	}
}