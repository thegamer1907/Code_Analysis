#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <ctime>
#include <map>
#include <set>
#include<iomanip>

#pragma comment(linker, "/STACK:102400000,102400000")
#define lson l, mid, rt << 1
#define rson mid + 1, r, rt << 1 | 1
#define clr(x) memset(x,0,sizeof(x))
#define cld(x) memset(x,-1,sizeof(x))
#define clx(x) memset(x,63,sizeof(x))
#define cln(x) memset(x,-64,sizeof(x))
#define rush() int T;scanf("%d",&T);while(T--)
#define pi 3.1415926

using namespace std;
typedef long long ll;

const int inf = 0x3f3f3f3f;
const ll llf = 0x3f3f3f3f3f3f3f3f;
const int maxn = (int) 1e6 + 7;
const double eps = 1e-10;
const ll mod = (int) 1e9 + 7;
const int dx[] = {0, 1, 0, -1};
const int dy[] = {1, 0, -1, 0};

int main() {
    std::ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int h, m, s, ss, tt;
    int f[100];
    cin >> h >> m >> s >> ss >> tt;
    clr(f);
    h *= 5;
    ss *= 5;
    tt *= 5;
    h %= 60;
    ss %= 60;
    tt %= 60;
    f[h]++;
    f[m]++;
    f[s]++;
    if (ss > tt) swap(ss, tt);
    int ans = 0;
    for (int i = ss; i < tt; i++)ans += f[i];
    if (ans % 3 == 0)puts("YES");
    else puts("NO");

    return 0;
}
