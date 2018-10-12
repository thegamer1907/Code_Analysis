#include "bits/stdc++.h"
using namespace std;
using ll = long long;

ll pb, ps, pc;
ll nb, ns, nc;
ll inf = 1e14;
int v[3];
ll have;


bool f(ll need) {
    ll a = max(0LL, v[0] * need - nb);
    ll b = max(0LL, v[1] * need - ns);
    ll c = max(0LL, v[2] * need - nc);

    return (have >= a * pb + b * ps + c * pc);
}


int main() {
    string s;
    cin >> s;

    for (char c : s) {
        if (c == 'B') v[0]++;
        if (c == 'S') v[1]++;
        if (c == 'C') v[2]++;
    }


    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> have;
    
    ll res = 0;
    for (ll b = inf; b >= 1; b /= 2) {
        while (b + res <= inf and f(b + res)) res += b;
    }

    cout << res << endl;
}