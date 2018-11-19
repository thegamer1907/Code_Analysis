#include<iostream>
#include<algorithm>
#include<cstdio>
#include<ctime>
#include<cstring>
#include<cmath>
#include<map>
#include<set>
#include<vector>
#include<assert.h>
#include<queue>
#include<stack>
#include<string>
#define fi first
#define se second
#define lson l,mid,o<<1
#define rson mid+1,r,o<<1|1
using namespace std;
typedef long long LL;
typedef unsigned long long uLL;
typedef pair<int, int> P;
typedef pair<P, P> PII;
const LL INF = 0x3f3f3f3f;
const int N = 1e5 + 10;
const LL mod = 1e9 + 7;
const double PI = acos(-1);


int main() {
    int h, m, s, t1, t2;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    double th, tm, ts, tt1, tt2;
    th = h * 30 + m * 0.5 + s * 1.0 / 120;
    tm = m * 6 + s * 1.0 / 10;
    ts = s * 6;
    tt1 = t1 * 30;
    tt2 = t2 * 30;
    if(t1 > t2) swap(tt1, tt2);
    bool flag = false;
    if(th > tt1 && th < tt2 && tm > tt1 && tm < tt2 && ts > tt1 && ts < tt2)    flag = true;
    else if((th < tt1 || th > tt2) && (tm < tt1 || tm > tt2) && (ts < tt1 || ts > tt2)) flag = true;
    if(flag)    puts("YES");
    else    puts("NO");
	return 0;
}
