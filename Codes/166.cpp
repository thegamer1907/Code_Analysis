#include <bits/stdc++.h>
using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

bool isPrime(int x) { if (x <= 4 || x % 2 == 0 || x % 3 == 0) return x == 2 || x == 3;
    for (int i = 5; i * i <= x; i += 6) if (x % i == 0 || x % (i + 2) == 0) return 0; return 1; }

inline void boostIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
typedef long long int ll;
typedef long double ld;

#define fori(n) for(ll i = 0; i < (n); ++i)
#define forj(n) for(ll j = 0; j < (n); ++j)
#define fork(n) for(ll k = 0; k < (n); ++k)

#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))

int main() {
    boostIO();
    int n; cin >> n;
    vector<int> A;
    int k;
    int group = 1;
    fori(n) {
        cin >> k;
        forj(k)
            A.push_back(group);
        group++;
    }
    int m; cin >> m;
    fori(m) {
        cin >> k;
        k--;
        cout << A[k] << endl;
    }
    return 0;
}
