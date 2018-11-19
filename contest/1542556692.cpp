#include <bits/stdc++.h>
using namespace std;
/***template***/
#define ll                   long long
#define dd                   double
#define scl(n)               scanf("%lld",&n)
#define sci(n)               scanf("%d",&n)
#define scd(n)               scanf("%lf",&n)
#define pi                   pair<ll,ll>
#define pb                   push_back
#define mp                   make_pair
#define uu                   first
#define vv                   second
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define FOOR(i,a,b)          for(ll i=a;i<=b;i++)
#define sorted(s)            sort(s.begin(),s.end())
#define reversed(s)          reverse(s.begin(),s.end())
#define contains(a,b)        (find((a).begin(), (a).end(), (b)) != (a).end())
#define MAXN                 10004
#define PI                   3.1415926536
#define mod                  1000000007
#define eps                  0.000000000001
/***template***/
string s,s2;
ll n;
vector<string>dis;
int main()
{
    cin>>s;
    scl(n);
    FOR(i,n)
    {
        cin>>s2;
        dis.pb(s2);
    }
    LOOP(i,dis.size())
    {
        if(dis[i]==s)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    bool f=0;
    bool f2=0;
    LOOP(i,dis.size())
    {
        if(dis[i][1]==s[0])
        {
            f=1;
        }
        if(dis[i][0]==s[1])
        {
            f2=1;
        }
    }
    if(f==1&f2==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
