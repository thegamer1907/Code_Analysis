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
    int n, k;
    vector<int> V;
    bool mp[1111];
    int solve() {
        scanf("%d%d", &n, &k);
        for(int i = 0; i < n; i++) {
            int v = 0;
            for(int j = 0; j < k; j++) {
                v *= 2;
                int t;
                scanf("%d", &t);
                v += t;
            }
            V.push_back(v);
            mp[v]=1;
        }
        for(int i = 0; i < V.size(); i++) {
            if(V[i] == 0)
                return 0 * puts("yes");
        }
        if(n == 1) return 0 *puts("no");

        if(k == 1) {
            return 0 * puts("no");
        } else if(k == 2) {
            if(mp[1] && mp[2]) return 0 * puts("yes");
            else return 0 * puts("no");
        } else if(k == 3) {
            bool isok = 0;
            for(int i = 0; i < k; i++) {
                bool t1 = 0, t2 = 0;
                for(int j = 0; j < V.size(); j++) {
                    if(V[j] == (1 << i)) {
                        t1 = 1;
                    }
                    if(~V[j] & (1 << i)) {
                        t2 = 1;
                    }
                }
                if(t1 && t2)
                    isok = 1;
            }
            return 0 * puts(isok?"yes":"no");
        } else if(k == 4) {
            bool isok = 0;
            for(int i = 0; i < k; i++) {
                bool t1 = 0, t2 = 0;
                for(int j = 0; j < V.size(); j++) {
                    if(V[j] == (1 << i))
                        t1 = 1;
                    if(~V[j] & (1 << i))
                        t2 = 1;
                }
                if(t1 && t2)
                    isok = 1;
            }
            for(int i = 0; i < k; i++)
                for(int j = i + 1; j < k; j++) {
                    bool t1 = 0, t2 = 0;
                    for(int k = 0; k < V.size(); k++) {
                        if(V[k] == (1<<i)+(1<<j)) {
                            t1 = 1;
                        }
                        if((~V[k] & (1 << i)) && (~V[k] & (1 << j))) {
                            t2 = 1;
                        }
                    }
                    if(t1 && t2)
                        isok = 1;
                }
            return 0 * puts(isok?"yes":"no");
        }
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
