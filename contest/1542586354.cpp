//B
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#define rep(i,l,r) for(int i=l;i<=r;i++)
#define red(i,r,l) for(int i=r;i>=l;i--)
#define re(i,n) for(int i=0;i<n;i++)
#define db(x) cout<<#x<<"="<<(x)<<" "
#define el cout<<endl
#define PII pair<int, int>
#define PIII pair<PII, int>
#define c0 first
#define c1 second
using namespace std;
typedef long long ll;
const int MXN = 2001000;

int H, M, S, T1, T2;
double ph, pm, ps;

void init()
{
    cin >> H >> M >> S >> T1 >> T2;
    H %= 12, T1 %= 12, T2 %= 12;
    ps = S / 5.0;
    pm = (M + S / 60.0) / 5.0;
    ph = (H + M / 60.0 + S / 3600.0);
}

namespace solve
{
    void solve()
    {
        //printf("%f %f %f\n", ps, pm, ph);
        int cnt = 0;
        if (T1 > T2) swap(T1, T2);
        if (T1 <= ps && ps <= T2)
        {
            ++ cnt;
        }
        if (T1 <= pm && pm <= T2)
        {
            ++ cnt;
        }
        if (T1 <= ph && ph <= T2)
        {
            ++ cnt;
        }
        if (cnt % 3)
            puts("NO");
        else
            puts("YES");
    }
}

int main()
{
    init();
    solve::solve();
    return 0;
}
