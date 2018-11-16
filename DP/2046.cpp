#include <bits/stdc++.h>
using namespace std;

int N, M, a[100005], s = 0, l;
bool seen[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for (int i = 1; i <= N; ++i) cin >> a[i];

    for (int i = N; i; --i) {
        if (!seen[a[i]]) {
            seen[a[i]] = true;
            ++s;
        }

        a[i] = s;
    }

    while (M--) {
        cin >> l;
        cout << a[l] << '\n';
    }
    return 0;
}