//C
#include <cstdio>
#include <iostream>
#include <algorithm>
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
const int MXN = 100010;
int n, k = 0;
int a[MXN] = {}, c[1 << 5] = {};


namespace solve
{
    int ans = 0;
    bool solve()
    {
        if (c[0])
            return 1;
        re(i, (1 << k))
            re(j, (1 << k))
                if (!(i & j))
                    if (c[i] && c[j])
                        return 1;
        return 0;
    }
}

int main()
{
    cin >> n >> k;
    re(i, n)
    {
        re(j, k)
        {
            int x;
            scanf("%d", &x);
            if (x) a[i] ^= 1 << j;
        }
        c[a[i]] = 1;
    }
    if (solve::solve()) puts("YES");
    else puts("NO");
    return 0;
}
