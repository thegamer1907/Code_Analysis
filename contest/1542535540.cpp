#include <bits/stdc++.h>
using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

inline void boostIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
typedef long int l;
typedef long long int ll;

#define fori(n) for(int i = 0; i < (n); ++i)
#define forj(n) for(int j = 0; j < (n); ++j)
#define fork(n) for(int k = 0; k < (n); ++k)

int main() {
    boostIO();
    int n, k; cin >> n >> k;
    map<int, bool> Map;

    fori(n) {
        int mask = 0;
        forj(k) {
            int c; cin >> c;
            mask = mask * 2 + c;
        }
        Map[mask] = 1;
    }

    fori(1 << k) {
        forj(1 << k) {
            if (Map[i] == 1 && Map[j] == 1 && (i & j) == 0) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
