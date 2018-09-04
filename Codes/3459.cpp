#include <bits/stdc++.h>
#define LL long long
#define MAXN 200008
using namespace std;

const int INF = 0x3f3f3f3f;
const int mod = 1000000007;

LL gcd(LL a, LL b){if (b == 0) return a; else return gcd(b, a % b);}
LL qp(LL base, int a){int res = 1;int k = a;while(k){if(k & 1)res = res * base;base = base * base;k >>= 1;}return res;}

bool check(LL k, LL n)
{
    LL cnt1 = 0;
    LL p = n;
    while (n)
    {
        if (n >= k)
        {
            n -= k;
            cnt1 += k;
        }
        else
        {
            cnt1 += n;
            n = 0;

        }
        n -= n / 10;
    }
    if (cnt1 * 2 >= p) return true;
    return false;
}

LL BiSearch(LL l, LL r, LL n)
{
    if (l == r) return l;
    LL mid = (l + r) >> 1;
    //printf("l = %I64d  r = %I64d check(mid,n) = %d\n", l, r,check(mid,n));
    if (check(mid, n))
    {
        return BiSearch(l, mid, n);
    }
    else
    {
        return BiSearch(mid + 1, r, n);
    }
}
int main()
{
    LL n;
    scanf("%I64d",&n);
    LL res = BiSearch(1, n, n);
    printf("%I64d",res);
}
