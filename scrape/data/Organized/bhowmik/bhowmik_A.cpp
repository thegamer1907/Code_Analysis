#include <bits/stdc++.h>
#define pb push_back
#define sc1(x) scanf("%lld",&x)
#define sc2(x,y) scanf("%lld%lld",&x,&y)
#define sc3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define MX 100000
using namespace std;

typedef long long int ll;
set<ll>S;
int main()
{
    ll n,m,k;
    sc3(n,m,k);
    for(ll i=1;i<=m;i++)
    {
        ll v;
        sc1(v);
        S.insert(v);
    }
    ll hi=k;
    ll ans=1;
    while(S.size())
    {
        //cout<<"OK"<<endl;
        ll cnt=0;
        while(S.size())
        {
            auto it=S.begin();
            ll val=*it;
            if(val<=hi)
            {
                cnt++;
                S.erase(it);
                continue;
            }
            else
                break;
        }
        if(S.size()==0)
            break;
        //cout<<cnt<<" "<<ans<<endl;
        if(cnt==0)
        {
            ll dif=*(S.begin())-hi;
            ll now=dif/k;
            if(dif%k!=0)
                now++;
            hi+=now*k;
        }
        else
        {
            hi+=cnt;
            ans++;
        }
    }
    printf("%lld\n",ans);

    return 0;
}