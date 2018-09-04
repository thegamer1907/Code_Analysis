#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define t int t; cin>>t; while(t--)
#define clear(a,x) memset(a,x,sizeof(a))
#define boost ios_base::sync_with_stdio(false)
#define show(a) for(int bm=0;bm<a.size();bm++)cout<<a[bm]<<" ";
#define sc1(x) scanf("%d",&x)
#define sc2(x,y) scanf("%d%d",&x,&y)
#define sc3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define sc4(a,b,c,d) scanf("%d%d%d%d",&a,&b,&c,&d)
#define sc5(a,b,c,d,e) scanf("%d%d%d%d%d",&a,&b,&c,&d,&e)
#define pr1(x) printf("%d\n",x)
#define pr2(x,y) printf("%d %d\n",x,y)
#define pr3(x,y,z) printf("%d %d %d\n",x,y,z)
#define pr4(a,b,c,d) printf("%d %d %d %d\n",a,b,c,d)
#define pr5(a,b,c,d,e) printf("%d %d %d %d %d\n",a,b,c,d,e)
#define scl(x) scanf("%lld",&x)
#define prl(x) printf("%lld\n",x)
#define u(i,a,b) for(i=a;i<b;i++)
#define d(i,a,b) for(i=a;i>b;i--)
#define all(x) x.begin(),x.end() 
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)
#define mp(x,y) make_pair(x,y) 
#define ff first
#define ss second
#define mod 1000000007
ll power(ll a,ll b,ll m)
{
    ll ret=1;
    while(b)
    {
        if(b%2)
            ret=((a%m)*(ret%m))%m;
        b/=2;
        a=((a%m)*(a%m))%m;
    }
    return ret;
}
int main() 
{
    ll ans = 0;
    int n,k;
    cin>>n>>k;
    map<int,long long> p,q;
    while(n--)
    {
        int a;
        scanf("%d",&a);
        if(a%k==0&&q.find(a/k)!=q.end())
        {
            ans +=q[a/k];
        }
        if(a%k==0&&p.find(a/k)!=p.end())
        {
            q[a]+=p[a/k];
        }
        p[a]++;
    }
    cout << ans << endl;
}