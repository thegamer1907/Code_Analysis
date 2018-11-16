#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define int long long

using namespace std;
const int INF = (0x7fffffffffffffff - 10);

inline void dbg(const string &s, const vector<int> &v)
{
    #ifdef LOCAL_HUGO
    int i = 0; for (const char &c : s) { if (c == '$') cout << v[i++]; else cout << c; } cout << '\n';
    #endif
}

void solve();
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}

const int bm = 10005;
vector<int> enfants[bm];
int couleurVoulue[bm];
int nbNoeuds;
int rep(int x, int c)
{
    int o = 0;
    if (c != couleurVoulue[x]) { ++o; c = couleurVoulue[x]; }
    for (int e : enfants[x])
    {
        o += rep(e, c);
    }
    return o;
}
void solve()
{
    cin >> nbNoeuds;
    for(int i = 0; i < (nbNoeuds - 1); ++i)
    {
        int p; cin >> p;
        enfants[p].push_back(i+2);
    }
    for(int i = 1; i <= nbNoeuds; ++i)
        cin >> couleurVoulue[i];
    cout << rep(1, 0) << "\n";
}