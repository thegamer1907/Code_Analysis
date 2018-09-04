#include<bits/stdc++.h>

#define x first
#define y second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define up_b upper_bound
#define low_b lower_bound

using namespace std;

typedef long long ll;
typedef long double ld;

const int N = 1e+6 + 5;
const ll inf = 4e+18;
const ll mod = 1e+9 + 7;
const int CNT = 1e6 + 5;

inline void boost() {
  ios_base :: sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
}

int main() {
    boost();
    string s;
    int nb, ns, nc, pb, ps, pc;
    ll R;
    cin >> s;
    cin >> nb >> ns >> nc >> pb >> ps >> pc;
    cin >> R;
    int cb, cs, cc;
    cb = cs = cc = 0;
    for(int i = 0; i < s.size(); i++){
        cb += s[i] == 'B';
        cs += s[i] == 'S';
        cc += s[i] == 'C';
    }
    ll l = 0, r = 1e14;
    while(l < r){
        ll m = (l + r) / 2;
        ll cost = max(0ll, m * cb - nb) * pb + max(0ll, m * cs - ns) * ps + max(0ll, m * cc - nc) * pc;
        if(cost < R)l = m + 1;
        else r = m;
    }
    if(max(0ll, r * cb - nb) * pb + max(0ll, r * cs - ns) * ps + max(0ll, r * cc - nc) * pc <= R)cout << r;
    else cout << l - 1;
}
