#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <list>
#include <queue>
#include <iterator>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define PI acos(-1)
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

using namespace std;

const ll INF = 1e18;
const int MAXN = 1e5+123;

int n, cl[MAXN], c[MAXN], color, cnt = 0, u;
vector< vector<int> > g;

void dfs(int v, int pr)
{
    color = cl[v];
    if(cl[v] != c[v]) {
        color = c[v];
        cnt++;
    }
    cl[v] = c[v];
    for(int i=0; i<g[v].size(); i++) {
        int to = g[v][i];
        if(to == pr) continue;
        cl[to] = color;
    }
    for(int i=0; i<g[v].size(); i++) {
        int to = g[v][i];
        if(to != pr) {
            dfs(to, v);
        }
    }
}


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> n;
    g.resize(n);
    for(int i=0; i<n-1; i++) {
        cin >> u; u--;
        g[i+1].pb(u);
        g[u].pb(i+1);
    }
    for(int i=0; i<n; i++) cin >> c[i];
    dfs(0, -1);
    cout << cnt << endl;
    return 0;
}
