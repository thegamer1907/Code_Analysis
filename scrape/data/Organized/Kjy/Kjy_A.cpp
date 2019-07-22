#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5 + 5;
queue<ll> q;
int main()
{
    int m;
    ll n, k, ans = 0, x, tmp;
    scanf("%lld%d%lld",&n,&m,&k);
    for(int i = 1; i <= m; i++){
        scanf("%lld",&x);
        q.push(x);
    }
    ll l = 1, r = k;
    while(!q.empty()){
        if(q.front() > r){
            ll x = (q.front()-r)/k;
            if(r+1+x*k <= q.front() && r+(x+1)*k >= q.front()){
                l = r+1+x*k; r = l+k-1;
            }
            else l = r+1+(x-1)*k, r = l+k-1;
        }
        if(q.front() >= l && q.front() <= r) ans++;
        tmp = 0;
        while(!q.empty() && q.front() >= l && q.front() <= r){
            q.pop(); tmp++;
        }
        r += tmp;
    }
    printf("%lld\n",ans);
    return 0;
}