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
        while(q.front() > r) l = r+1, r = l+k-1;
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