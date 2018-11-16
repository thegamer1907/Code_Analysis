
#include<bits/stdc++.h>

using namespace std;

/***template***/
#define ll                   long long
#define dd                   double
#define scl(n)               scanf("%lld",&n)
#define scd(n)               scanf("%lf",&n)
#define pi                   pair<ll,ll>
#define pb                   push_back
#define mp                   make_pair
#define uu                   first
#define vv                   second
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define FOOR(i,a,b)          for(ll i=a;i<=b;i++)
#define LOP(i,a,b)           for(ll i=a;i<b;i++)
#define sorted(s)            sort(s.begin(),s.end())
#define reversed(s)          reverse(s.begin(),s.end())
#define contains(a,b)        (find((a).begin(), (a).end(), (b)) != (a).end())
#define MAXN                 10004
#define pii                  3.1415926536
#define mod                  1000000007
#define eps                  0.0000000001
#define inf                  9000000000000000
#define mstt(a,b)            memset((a),(b),sizeof (a))

//priority_queue<ll, vector<ll>, greater<ll> >q

ll ara[1000006];

int main()
{
    ll n;
    scl(n);
    ll mx=0,tot=0,id=0;
    LOOP(i,n)
    {
        scl(ara[i]);
        if(ara[i])
        {
            tot--;
        }
        else
            tot++;
        if(tot<0)
            tot=0;
        if(tot>mx)
        {
            mx=tot;
            id=i;
        }
    }
    if(mx==0)
    {
        printf("%lld\n",n-1);
        return 0;
    }
    for(ll i=id; i>=0 ;i--)
    {
        if(!ara[i])
        {
            ara[i]=1;
            mx--;
        }
        else
        {
            ara[i]=0;
            mx++;
        }
        if(mx==0)
            break;
    }
    tot=0;
    LOOP(i,n)
    {
        if(ara[i]==1)
            tot++;
    }
    printf("%lld\n",tot);
}
