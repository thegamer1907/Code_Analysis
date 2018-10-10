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

#define fori(n) for(int i = 0; i < (n); ++i)
#define forj(n) for(int j = 0; j < (n); ++j)
#define fork(n) for(int k = 0; k < (n); ++k)

#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))

ll Power(ll value, ll power) {
    ll result = 1;
    while (power > 0) {
        if (power % 2 == 1)
            result = ((value % 1000000009) * (result % 1000000009)) % 1000000009;
        value = ((value % 1000000009) * (value % 1000000009)) % 1000000009;
        power /= 2;
    }
    return result;
}

int main() {
    boostIO();
    ll n; cin >> n;

    ll Number = 19;
    fori(n - 1) {
        Number+= 9;
        ll k = Number;
        ll Sum = 0;
        while (k != 0) {
            Sum += k % 10;
            k /= 10;
        }
        if (Sum != 10)
            i--;

    }
    cout << Number;
    return 0;
}
