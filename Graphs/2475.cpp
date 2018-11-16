#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MOD = 1e9 + 7;

#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define FOR(i, n) for (int (i) = 0; (i)<(n); (i)++)
#define pb push_back
#define pf push_front
#define in(v) for (auto &e : v) cin >> e;
#define out(v) for (auto &e : v) cout << e << ' ';
#define PI 3.14159265

#define sort2(v, structName, structMember1, structMember2) \
     sort(all(v), [&](const structName& l, const structName& r) \
          { return tie(l.structMember1, l.structMember2) < tie(r.structMember1, r.structMember2); });

#define sort3(v, structName, structMember1, structMember2, structMember3) \
     sort(all(v), [&](const structName& l, const structName& r) \
          { return tie(l.structMember1, l.structMember2, l.structMember3) < tie(r.structMember1, r.structMember2, r.structMember3); });

inline void tostr(string &s, auto num) {stringstream ss; ss<<num; ss>>s;}
inline void toint(auto &num, string s) {stringstream ss; ss<<s; ss>>num;}
inline long double fact(auto n) {return (n == 1 || n == 0) ? 1 : fact(n - 1) * n;}
inline long long mod(auto a, auto b) {return (a+(abs(a)/b+1)*b)%b;}
inline long long lcm(auto a, auto b) {return a*b/__gcd(a, b);}

/*_____________________________________________________*/

int n, c;
vector <vector<int>> g(10010);
vector <int> v(10010);

void dfs(int ver, int parent)
{
    for (auto &e : g[ver])
    {
        if (v[ver] != v[e] and e != parent) c++;
        if (e != parent) dfs(e, ver);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    cin >> n; c = 0;
    FOR(i, n-1)
    {
        int a; cin >> a;
        a--;
        g[i+1].pb(a);
        g[a].pb(i+1);
    }

    FOR(i, n) cin >> v[i];
    dfs(0, 0);
    cout << c+1;
    return 0;
}
