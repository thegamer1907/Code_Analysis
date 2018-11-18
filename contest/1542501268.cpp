#define Link "http://codeforces.com/contest/868/problem/F"

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

#define TASK "868F"

using namespace std;

const int maxn = 1e5 + 10;
int n,k,a[maxn],first,last,cnt[maxn];
long long now,f[21][maxn];

void Enter()
{
    cin >> n >> k;
    for (int i=1;i<=n;++i)
        cin >> a[i];
}

void Init()
{

}

long long Cost(int l, int r)
{
    while (first < l) {
        --cnt[a[first]];
        now -= cnt[a[first]];
        ++first;
    }
    while (l < first) {
        --first;
        now += cnt[a[first]];
        ++cnt[a[first]];
    }
    while (last < r) {
        ++last;
        now += cnt[a[last]];
        ++cnt[a[last]];
    }
    while (r < last) {
        --cnt[a[last]];
        now -= cnt[a[last]];
        --last;
    }
    return now;
}

void Div(int t, int l, int r, int L, int R)
{
    if (l > r)
        return;
    int m = (l + r) / 2;
    f[t][m] = 1e18;
    int chose = L;
    for (int i=L;i<=min(m,R);++i)
        if (f[t][m] > f[t-1][i-1] + Cost(i,m)) {
            f[t][m] = f[t-1][i-1] + Cost(i,m);
            chose = i;
        }
    Div(t,l,m-1,L,chose);
    Div(t,m+1,r,chose,R);
}

void Solve()
{
    first = 1;
    last = 0;
    now = 0;
    for (int i=1;i<=n;++i)
        f[1][i] = Cost(1,i);
    for (int t=2;t<=k;++t) {
        Cost(1,n);
        Div(t,1,n,1,n);
    }
    cout << f[k][n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

#ifdef LHL
    freopen(".INP","r",stdin);
    freopen(".OUT","w",stdout);
#else
//    freopen(TASK".INP","r",stdin);
//    freopen(TASK".OUT","w",stdout);
#endif // LHL

    Enter();
    Init();
    Solve();
}
