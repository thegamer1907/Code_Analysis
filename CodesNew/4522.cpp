#include <bits/stdc++.h>

using namespace std;

#define MAX 500001
int n, arr[MAX];
bool vis[MAX];

int binarySearch(int r, int target) {
    int l = 0;
    while (l < r) {
        int mid = (r + l + 1)/2;

        if (arr[target] >= 2 * arr[mid])
            l = mid;
        else
            r = mid - 1;
    }
    if (arr[target] >= 2*arr[l]) return l;
    else return -1;
}


int main() {
    memset(vis, 0, sizeof vis);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int j = n, limit = n - 1;
    memset(vis, 0, sizeof vis);
    for (int r = n - 1; r >= 0; --r) {
        int child = binarySearch(limit, r);
        if (child != -1) {
            j--;
            limit = child - 1;
        }
        if (limit < 0) break;
    }
    cout << max(j*1.0, ceil(n/2.0));
    return 0;
}