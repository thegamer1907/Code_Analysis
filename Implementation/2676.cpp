#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int n, ar[N], ans[N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        ar[i]--;
        ans[ar[i]] = i;
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] + 1 << " ";
}