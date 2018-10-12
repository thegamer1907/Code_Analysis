#include <bits/stdc++.h>
#define all(cont) cont.begin(), cont.end()
#define pb push_back

using namespace std;

//ifstream f (".in");
//ofstream g (".out");

const int NMAX = 5e5;
int n;
long long ans;
string v[NMAX];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (int i = n - 2; i >= 0; --i) {
        if (v[i] <= v[i + 1]) {
            continue;
        }
        int len = 0;
        while (v[i][len] == v[i + 1][len]) {
            ++len;
        }
        ans += v[i].size() - len;
        v[i] = v[i].substr(0, len);
    }

    for (int i = 0; i < n; ++i) {
        cout << v[i] << '\n';
    }

}
