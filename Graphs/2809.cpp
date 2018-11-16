#if 1
#include <bits/stdc++.h>
#else
#include "includes.h"
#endif

using namespace std;

#if 1
#define pv(x) cout<<#x<<" = "<<(x)<<"; ";cout.flush()
#define pn cout<<endl
#else
#define pv(x)
#define pn
#endif

#if 1
#define in cin
#define out cout
#else
ifstream in("date.in");
ofstream out("date.out");
#endif

using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;
#define pb push_back
#define mp make_pair
const int NMAX = 30 + 5;
const ll inf_ll = 1e18 + 5;
const int inf_int = 1e9 + 5;
const int mod = 100003;
using zint = int;

int main() {
	cin.sync_with_stdio(false);
	cin.tie(0);

    int N,M;
    in >> N >> M;
    vector<int> color(N+1);
    
    int mn = inf_int;
    for (int i = 1;i <= N;++i) {
        in >> color[i];
        mn = min(mn, color[i]);
    }
    
    vector< set<int> > st(1e5 + 5);
    while (M--) {
        int x,y;
        in >> x >> y;
        
        if (color[x] != color[y]) {
            st[color[x]].insert(color[y]);
            st[color[y]].insert(color[x]);
        }
    }
    
    int ans = mn;
    for (int i = 1;i <= 1e5;++i) {
        if (st[ans].size() < st[i].size()) {
            ans = i;
        }
    }
    
    out << ans;
	return 0;
}