#pragma comment(linker, "/STACK:102400000,102400000")
#ifndef ONLINE_JUDGE
#include "stdafx.h"
#else
#include<bits/stdc++.h>
#endif
using namespace std;
#define rep(i,a,b) for (int i=(a);i<=(b);i++)
#define per(i,a,b) for (int i=(a);i>=(b);i--)
#define trav(a,x) for (auto &a:x)
#define mp(a,b) make_pair(a,b)
#define all(x) x.begin(),x.end()
#define fill(x,c) memset(x,c,sizeof(x))
#define write(x) cout<<(x)<<' '
#define writeln(x) cout<<(x)<<endl
typedef long long lnt;
typedef vector<int> VI;
typedef vector<lnt> VL;
typedef pair<int, int> PII;
typedef pair<lnt, lnt> PLL;
typedef vector<pair<int, int>> VPI;
typedef vector<pair<lnt, lnt>> VPL;
typedef queue<int> QI;
typedef queue<lnt> QL;
typedef map<int, int> MII;
typedef map<lnt, lnt> MLL;
typedef map<int, pair<int, int>> MPI;
typedef map<lnt, pair<lnt, lnt>> MPL;
typedef map<int, vector<int>> MVI;
typedef map<lnt, vector<lnt>> MVL;
typedef set<int> SI;
typedef set<lnt> SL;
typedef set<pair<int, int>> SPI;
typedef set<pair<lnt, lnt>> SPL;

inline lnt pow(lnt a, lnt b, lnt p) {
    lnt rtn = 1;
    while (b) {
        if (b & 1) rtn = rtn * a % p;
        a = a * a % p;
        b >>= 1;
    }
    return rtn;
}
lnt inv(lnt a, lnt p) {
    return pow(a, p - 2, p);
}
void makedata() {
    freopen("input.txt", "w", stdout);
    srand((unsigned)time(NULL));
    fclose(stdout);
}

int h[200000], s[200000];

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    //makedata();
    std::ios::sync_with_stdio(0), cin.tie(0);
    int n, k;
    cin >> n >> k;
    s[0] = 0;
    rep(i, 1, n) {
        cin >> h[i];
        s[i] = s[i - 1] + h[i];
    }
    int ans = INT_MAX, id = 1;
    rep(i, 1, n) {
        if (i + k - 1 <= n && s[i + k - 1] - s[i - 1] < ans) {
            ans = s[i + k - 1] - s[i - 1];
            id = i;
        }
    }
    writeln(id);
    return 0;
}
