#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define x first
#define y second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;
    if (b < a)
        swap(a, b);
    vector<int> x[2];
    for (int i = 1; i <= n; ++i)
        x[0].push_back(i);
    int it = 0;
    int cnt = 0;
    while (1) {
        if (x[it].size() == 2) {
            cout << "Final!";
            return 0;
        }
        cnt++;
        x[it ^ 1].clear();
        for (int i = 0; i < x[it].size(); i += 2) {
            if (x[it][i] == a && x[it][i + 1] == b) {
                cout << cnt;
                return 0;
            }
            if (x[it][i] == a || x[it][i] == b)
                x[it ^ 1].push_back(x[it][i]);
            else if (x[it][i + 1] == a || x[it][i + 1] == b)
                x[it ^ 1].push_back(x[it][i + 1]);
            else
                x[it ^ 1].push_back(x[it][i]);
        }
        it ^= 1;
    }
    return 0;
}
