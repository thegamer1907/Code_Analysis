#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,x,y) for(ll i = (x),_##i = (y);i < _##i; ++i)
#define FORR(i,x,y) for(ll i = (x),_##i = (y);i <= _##i; ++i)
const int maxn = 1e5 + 10;
ll n,m,k;
ll pos[maxn];
int main()
{
    scanf("%lld%lld%lld",&n,&m,&k);
    FORR(i,1,m) scanf("%lld",&pos[i]);
    ll cnt = m;
    int i = 1;
    ll mov = 0;
    ll l,r;
    ll tmp ;
    ll ans = 0;
    while(cnt)
    {
        l = (pos[i] - mov - 1LL) / k * k + 1LL;
        r = l + k - 1LL ;
        tmp = 0;
        //cout << l << " " << r << endl;
        while(pos[i] - mov <= r && i <= m && cnt)
        {
            tmp ++;
            cnt --;
           // cout << "i = "<<i << endl;
            i ++;
        }
        //cout << cnt << endl;
        mov += tmp;
        ans ++;
        //cout << mov << endl;
    }
    printf("%lld\n",ans);
    return 0;
}