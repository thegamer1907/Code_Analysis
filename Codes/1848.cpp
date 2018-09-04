#include<bits/stdc++.h>
#define fi first
#define se second
#define lson l,mid,o<<1
#define rson mid+1,r,o<<1|1
using namespace std;
typedef long long LL;
typedef unsigned long long uLL;
typedef pair<int, int> P;
typedef pair<LL, LL> PII;
const LL INF = 0x3f3f3f3f;
const int N = 2e5 + 10;
const int M = 110;
const LL mod = 1e9 + 7;
const double PI=acos(-1);

LL n, m, k;
bool check(LL x){
    LL tot = 0;
    for(LL i = 1; i <= n; ++i){
        tot += max(0ll, m - (x - 1) / i);
    }
    return tot >= k;
}
int main()
{
    scanf("%I64d%I64d%I64d", &n, &m, &k);
    k = n * m - k + 1;
   // cin >> n >> m >> k;
    LL l = 1, r = m*n + 1, mid;
    while(l + 1 < r){
        mid = (l + r) >> 1;
        if(check(mid))  l = mid;
        else    r = mid;
    }
   // cout<<l<<endl;
    printf("%I64d\n", l);
    return 0;
}
