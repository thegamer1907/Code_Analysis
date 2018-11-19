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
    int get(int x) {
        return (x*6)%360;
    }
    vector<double> V;
    bool inrange(int l, int r) {

    }
    int solve() {
        double a, b, c, s, t;
        scanf("%lf%lf%lf%lf%lf", &a, &b, &c, &s, &t);
        if(a == 12) a = 0;
        a /= 12;
        b /= 60;
        c /= 60;
        b += c/60;
        a += b/12;
        V.push_back(a), V.push_back(b), V.push_back(c);
        sort(all(V));
        V.push_back(1+V[0]);
        s /= 12;
        t /= 12;
        for(int i = 0; i < 3; i++) {
            if(dcmp(s - V[i])>0 && dcmp(s - V[i+1])<0 && dcmp(t - V[i])>0 && dcmp(t - V[i+1])<0)
                return 0 * puts("yes");
        }
        for(int i = 0; i < 3; i++) {
            if(dcmp(s - V[i])>0 && dcmp(s - V[i+1])<0 && dcmp(1+t - V[i])>0 && dcmp(1+t - V[i+1])<0)
                return 0 * puts("yes");
        }
        for(int i = 0; i < 3; i++) {
            if(dcmp(1+s - V[i])>0 && dcmp(1+s - V[i+1])<0 && dcmp(t - V[i])>0 && dcmp(t - V[i+1])<0)
                return 0 * puts("yes");
        }
        for(int i = 0; i < 3; i++) {
            if(dcmp(1+s - V[i])>0 && dcmp(1+s - V[i+1])<0 && dcmp(1+t - V[i])>0 && dcmp(1+t - V[i+1])<0)
                return 0 * puts("yes");
        }
        puts("no");
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
