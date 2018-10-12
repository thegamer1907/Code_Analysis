#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> items(n);
    for (int i = 0, v; i < n; ++i) {
        cin >> items[i];
    }
    sort(items.begin(), items.end());
    int ans = 0;
    for (int i = 0, j = n-n/2; i < n-n/2 && j < n; ++i) {
        while (j < n && 2*items[i] > items[j]) ++j;
        if (j < n) ans++, j++;
    }
    cout << n-ans << '\n';
}