#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, p;
    cin >> s >> p;

    int n = s.size(), m = p.size();
    int i = 0, j = 0;
    int starIdx = -1, matchIdx = -1;

    for(; i < n; ) {
        if(j < m && (p[j] == s[i] || p[j] == '?')) {
            i++;
            j++;
        }
        else if(j < m && p[j] == '*') {
            starIdx = j;
            matchIdx = i;
            j++;
        }
        else if(starIdx != -1) {
            j = starIdx + 1;
            matchIdx++;
            i = matchIdx;
        }
        else {
            cout << "false" << endl;
            return 0;
        }
    }

    for(; j < m; j++) {
        if(p[j] != '*') {
            cout << "false" << endl;
            return 0;
        }
    }

    cout << "true" << endl;
    return 0;
}