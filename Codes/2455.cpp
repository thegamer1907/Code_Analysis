#include <bits/stdc++.h>

using namespace std;

inline void Boost() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
typedef long long int ll;
typedef long double ld;

const int NMax = 1e7 + 50;
const int MAX = 1e7;

int v[NMax];
bitset < NMax > viz;

int main() {
	Boost();

    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        ++v[x];
    }

    for(int i = 2; i <= MAX; ++i) {
        if(viz[i] == false) {
            for(int j = 2 * i; j <= MAX; j += i) {
                v[i] += v[j];
                viz[j] = true;
            }
        } else {
            v[i] = 0;
        }
        v[i] += v[i - 1];
    }

    int m;
    cin >> m;
    while(m--) {
        int a, b;
        cin >> a >> b;

        a = min(a, MAX + 1);
        b = min(b, MAX);

        cout << v[b] - v[a - 1] << "\n";
    }
	return 0;
}