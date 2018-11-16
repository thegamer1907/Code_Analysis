#define B489
#ifdef B489
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<vvd> vvvd;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<vvc> vvvc;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<iii> viii;
typedef vector<ii> vii;
typedef vector<viii> vviii;
typedef vector<vii> vvii;
typedef  stack<int> si;
typedef queue<int> qi;
typedef map<int,int> mii;
typedef queue<ii> qii;
typedef pair<int , double> id;
typedef vector<id> vid;
typedef vector<vid> vvid;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef unsigned long long ull;
typedef pair<double , double > dd;
typedef vector<dd> vdd;
#define inf 10000000
#define biginf (int)1e18
#define sup 1e-9
#define pi acos(-1)
#define mod 1000000007

vi match, vis;
vvi AdjList;
// global variables
int Aug(int l) {
// return 1 if an augmenting path is found
    if (vis[l]) return 0;
// return 0 otherwise
    vis[l] = 1;
    for (int j = 0; j < (int)AdjList[l].size(); j++) {
        int r = AdjList[l][j]; // edge weight not needed -> vector<vi> AdjList
        if (match[r] == -1 || Aug(match[r])) {
            match[r] = l; return 1;
// found 1 matching
        } }
    return 0;
// no matching
}

int main(){
    ios::sync_with_stdio(0);
    int n, m; cin >> n;
    vi boys(n);
    for (int i = 0; i < n; ++i) cin >> boys[i];
    cin >> m;
    vi girls(m);
    for (int i = 0; i < m; ++i) cin >> girls[i];
    AdjList.clear();
    AdjList.resize(n);
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            if(abs(boys[j] - girls[i]) <= 1) AdjList[j].push_back(n + i);
        }
    }

    int MCBM = 0;
    match.assign(n + m + 1, -1);
    for (int l = 0; l < n; l++) {
// n = size of the left set
        vis.assign(n, 0);
// reset before each recursion
        MCBM += Aug(l);
    }
    cout << MCBM << endl;
    return 0;
}

#endif
