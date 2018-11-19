#define poj
#ifdef poj
#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#endif // poj
#ifdef others
#include <bits/stdc++.h>
#endif // others
//#define file
#define all(x) x.begin(), x.end()
using namespace std;
const double eps = 1e-8;
int dcmp(double x) { if(fabs(x)<=eps) return 0; return (x>0)?1:-1;};
typedef long long LL;

namespace solver {
    typedef unsigned long long LL;
    int n;
    string s, str[111];
    bool vis[111];
    int solve() {
        cin >> s;
        scanf("%d", &n);
        bool isok = 0;
        int t1, t2;
        t1 = t2 = 0;
        for(int i = 1; i <= n; i++) {
            cin >> str[i];
        }
        for(int i = 1; i <= n; i++) {
            if(str[i] == s) return 0 * puts("YES");
            if(str[i][0] == s[1])
                t1 = 1;
            if(str[i][1] == s[0])
                t2 = 1;
        }
        if(t1 && t2) return 0 * puts("YES");
        else puts("NO");
    }
}

int main() {
    #ifdef file
    freopen("folding.in", "r", stdin);
    freopen("folding.out", "w", stdout);
    #endif // file
    solver::solve();
    return 0;
}
