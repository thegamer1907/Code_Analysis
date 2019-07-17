#include <bits/stdc++.h>
#define pb(a)           push_back(a)
#define ll              long long int
#define scd(a)          scanf("%d",&a)
#define mp(a,b)         make_pair(a,b)
#define scl(w)          scanf("%I64d",&w)
#define scdd(a,b)       scanf("%d %d",&a,&b)
#define srt(a)          sort(a.begin(),a.end())
#define rsrt(a)         sort(a.rbegin(),a.rend())
#define scll(a,b)       scanf("%I64d %I64d",&a,&b)
#define input(v,n)      for (ll i=0;i<n;i++){ll a;cin >> a;v.push_back(a);}
#define input2(v1,v2,n) for (ll i=0;i<n;i++){ll a,b;cin >> a>>b;v1.push_back(a);v2.pb(b);}
#define rep(a,n)        for(ll i=a;i<n;i++)
#define vll             vector<ll>
#define pi              acos(-1.0)
using namespace std;

int main()
{
    ll n,m,k,t=0,t2=0,t3=0,t4=0,res=1,i;
    cin>>n>>m>>k;
    vector<ll>v;

    for(i=0;i<m;i++)
    {
        cin>>t;
        v.pb(t);
    }
    t2=0;
    t=1;
    for(i=0;i<m-1;i++)
    {
        if((v[i]-1-t2)/k==(v[i+1]-1-t2)/k)
        {
            t++;
        }
        else
        {
            t2+=t;
            t=1;
            res++;
        }
    }
    cout<<res<<endl;
}