#include <bits/stdc++.h>

#define fr first
#define sc second

using namespace std;
const double PI = acos(-1);
const int NMAX = 1e7, MMAX = 1e9;
typedef unsigned long long u64;
typedef long long ll;

char anf[30];
string getString() {
    scanf(" %s ", anf);
    return string(anf);
}

int main() {
    #ifdef HOME
        freopen("input.txt", "r", stdin);
    #else
//        freopen("numrecovery.in", "r", stdin);
//        freopen("numrecovery.out", "w", stdout);
    #endif
    int h, m, s, t1, t2;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    h = 60 / 12 * h % 60;
    t1 = 60 / 12 * t1 % 60;
    t2 = 60 /12 * t2 % 60;
    if (t1 > t2) {
        swap(t1, t2);
    }
    if (h >= t1 && h < t2 && m >= t1 && m < t2 && s >= t1 && s < t2) {
        puts("YES");
    } else if (!(h >= t1 && h < t2) && !(m >= t1 && m < t2) && !(s >= t1 && s < t2)) {
        puts("YES");
    } else {
        puts("NO");
    }
}
