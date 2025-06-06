#include<iostream>
#include<climits> // For INT_MAX
using namespace std;

const int N = 1e5+10;
int a[N];

void merge(int l, int r, int mid) {
    int l_sz = mid - l + 1;
    int r_sz = r - mid;

    int L[l_sz + 1], R[r_sz + 1]; // +1 for sentinel values (INT_MAX)

    for(int i = 0; i < l_sz; i++) {
        L[i] = a[l + i];
    }
    for(int i = 0; i < r_sz; i++) {
        R[i] = a[mid + 1 + i];
    }

    L[l_sz] = R[r_sz] = INT_MAX; // Sentinel values

    int l_i = 0, r_i = 0;
    for(int i = l; i <= r; i++) {
        if(L[l_i] <= R[r_i]) {
            a[i] = L[l_i];
            l_i++;
        } else {
            a[i] = R[r_i];
            r_i++;
        }
    }
}

void mergeSort(int l, int r) {
    if(l >= r) return; // Base case: only 1 element

    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, r, mid);
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    mergeSort(0, n - 1);

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
