#include <bits/stdc++.h>

using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define FOR(i, a, b) for (int i=a; i<b; i++)
#define F0R(i, a) for (int i=0; i<a; i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
 
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound

const int MOD = 1000000007;
const int MAXN = 1e5 + 5;
const double PI = 4*atan(1);

vector<vi> v;
vector<vi> cc;
int vst[MAXN];
int ind = 0;

void dfs(int cur) {
    vst[cur] = true;
    cc[ind].pb(cur);
    F0R(i, (int) v[cur].size()) {
        if(!vst[v[cur][i]])
            dfs(v[cur][i]);
    }
}

int main() {
    int N, M; cin >> N >> M;
    F0R(i, N)
        v.pb({});
    F0R(i, M) {
        int x, y; cin >> x >> y;
        v[--x].pb(--y);
        v[y].pb(x);
    }
    F0R(i, N) {
        if (!vst[i]) {
            cc.pb({});
            dfs(i);
            ++ind;
        }
    }
    int res = 0;
    F0R(i, cc.size()) {
        int e = 0;
        F0R(j, cc[i].size())
            e += v[cc[i][j]].size();
        if (e / 2 == cc[i].size() - 1)
            ++res;
    }
    cout << res;
}