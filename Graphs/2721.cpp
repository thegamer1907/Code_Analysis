//Solution by Zhusupov Nurlan
#include <iostream>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <ctime>
#include <numeric>

using namespace std;

typedef long long ll;
typedef map<string , int> MSI;
typedef vector<int> VI;

#define pb(x) push_back(x)
#define sqr(x) ((x) * (x))
#define F first
#define S second
#define SZ(t) ((int) t.size())
#define len(t) ((int) t.length())
#define base 10
#define fname ""
#define sz 200 * 1000
#define EPS (1e-8)
#define INF ((int)1e9 + 9)
#define write(xx) printf("%d" , xx);
#define readln(xx) getline(cin , xx)
#define read(xx) scanf("%d" , &xx)
#define mp make_pair

const int mod = 1e9 + 7;
const double PI  = acos(-1.0);

int n, pr[sz], m;
VI a[sz], b[sz];
ll v, w, u, d[sz];
priority_queue<pair<ll, ll>> s;

void back(int v) {
    if (v == 0) return;
    back(pr[v]);
    cout << v << " ";
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> v >> u >> w;
        a[v].pb(u);
        b[v].pb(w);
        a[u].pb(v);
        b[u].pb(w);
    }

    for (int i = 1; i <= n; i++) d[i] = 1e18;
    d[1] = 0;

    s.push({0, 1});
    while (!s.empty()) {
        pair <ll, int> g = s.top();
        s.pop();
        v = g.S;
        w = -g.F;
        if (w > d[v]) continue;

        for (int i = 0; i < a[v].size(); i++) {
            int to = a[v][i];
            if (d[to] > d[v] + b[v][i]) {
                d[to] = d[v] + b[v][i];
                s.push({-d[to], to});
                pr[to] = v;
            }
        }
    }
    if (d[n] == 1e18) {
        cout << -1;
        return 0;
    }
    back(n);

}

