#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define bug printf("*********\n");
#define FIN freopen("in.txt", "r", stdin);
#define debug(x) cout <<"[" <<x <<"]" <<end;
#define IO ios::sync_with_stdio(false),cin.tie(0);


const int maxn = 1e5 + 7;
const double pi = acos(-1);
const int inf = 0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3f;

double h, m, s, t1, t2;

int main() {
    scanf("%lf%lf%lf%lf%lf", &h, &m, &s, &t1, &t2);
    m = m + s / 60.0;
    h = (h + m / 60.0) * 5.0;
    if(m >= 60.0) m -= 60.0;
    if(s >= 60.0) s -= 60.0;
    t1 = t1 * 5.0, t2 = t2 * 5.0;
    if(t1 > t2) swap(t1, t2);
    int flag1 = 1, flag2 = 1;
    if((t1 <= h && t2 >= h) ||(t1 <= m && t2 >= m) || (t1 <= s && t2 >= s)) {
        flag1 = 0;
    }
    if(h <= t1) h += 60.0;
    if(m <= t1) m += 60.0;
    if(s <= t1) s += 60.0;
    t1 += 60;
    if((t2 <= h && t1 >= h) || (t2 <= m && t1 >= m) || (t2 <= s && t1 >= s)) {
        flag2 = 0;
    }
    if(flag1 || flag2) {
        puts("YES");
    } else {
        puts("NO");
    }
    return 0;
}
