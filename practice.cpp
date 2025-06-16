#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();

        for(int i=0; i<=h-n; i++){
            if(haystack.substr(i, n) == needle){
                return i;
            }
        }
        return -1;
    }
};
int main(){
	string haystack;
	cin >> haystack;

	string needle;
	cin >> needle;

	Solution sol;

	cout << sol.strStr(haystack, needle);
}