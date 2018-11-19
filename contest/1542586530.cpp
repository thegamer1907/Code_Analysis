#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <ctype.h>
#include <vector>
#include <algorithm>
#include <sstream>
#define PI acos(-1.0)
#define in freopen("in.txt", "r", stdin)
#define out freopen("out.txt", "w", stdout)
using namespace std;
typedef long long ll;
const int maxn = 1000 + 7, INF = 0x7f7f7f7f, mod = 1e9 + 7;

int h, m, s, t1, t2;

int main() {
    scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
    int h1 = h, h2 = h%12+1;
    int m1 = m/5, m2 = (m+5)/5; if(m1 == 0) m1 = 12;
    int s1 = s/5, s2 = (s+5)/5; if(s1 == 0) s1 = 12;
    if(t1 > t2) swap(t1, t2);
    int f1 = 0, f2 = 0;
    for(int i = t1; i < t2; ++i) {
        if(i == h1 || i == m1 || i == s1) { f1 = 1; break;}
    }
    for(int i = t2; i < t1+12; ++i) {
        if(i == h1 || i == m1 || i == s1) { f2 = 1; break;}
        if(i > 12) if(i-12 == h1 || i-12 == m1 || i-12 == s1) { f2 = 1; break;}
    }
    //cout << f1 << "  " << f2 << endl;
    if(f1 + f2 == 2) puts("NO");
    else puts("YES");

    return 0;
}





