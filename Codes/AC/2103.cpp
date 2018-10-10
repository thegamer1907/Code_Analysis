#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<math.h>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <deque>
#include <list>
using namespace std;

#define ll long long
#define db double
#define pi acos(-1)
#define pb push_back

#define pf printf
#define sf scanf
#define sof sizeof
#define pob pop_back()
#define gcd(a,b) __gcd(a,b)
#define logab(a,b) (log(a) / lob(b))
#define mem(a,v) memset(a, v, sizeof(a))
#define m_p make_pair
#define all(v) (v.begin(), v.end())
#define loop(type, v, it) for(type::iterator it = v.begin(); it != v.end(); ++it)
#define rep(i, a, n) for(int i = a; i <= n; ++i)
#define rrep(i, a, n) for(int i = n; i>= 0; i--)

#define sf1(a) scanf("%d", &a)
#define sf2(a, b) scanf("%d %d", &a, &b)
#define sf3(a, b, c) scanf("%d %d %d", &a, &b, &c);
#define sf4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d);

#define sfl1(a) scanf("%lld",&a)
#define sfl2(a,b) scanf("%lld%lld",&a,&b)
#define sfl3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define sfl4(a,b,c,d) scanf("%lld%lld%lld%lld",&a,&b,&c,&d)

#define pf1(a) printf("%d\n",a)
#define pf2(a,b) printf("%d %d\n",a,b)
#define pf3(a,b,c) printf("%d %d %d\n",a,b,c)
#define pf4(a,b,c,d) printf("%d %d %d %d\n",a,b,c,d)

#define pfl1(a) printf("%lld\n",a)
#define pfl2(a,b) printf("%lld %lld\n",a,b)
#define pfl3(a,b,c) printf("%lld %lld %lld\n",a,b,c)
#define pfl4(a,b,c,d) printf("%lld %lld %lld %lld\n",a,b,c,d)

#define lb lower_bound
#define ub upper_bound
#define fr first
#define sc second
#define exp1 exp(1)

int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
int reset(int N,int pos)
{
    return N= N & ~(1<<pos);
}
bool check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
//k=unique(mas,mas+k)-mas;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;

int cas = 1;
int dxx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dyy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

#define M 200006
#define mod 1000000007
/*
bool mark[M];
ll prime[M];
void seive()
{
    prime[0] = 2;
    int c = 1;
    for(int i = 3; i*i <= M; i+= 2)
    {
        if(mark[i] == false)
        {
            for(int j = i*i; j < M; j+= i+i)
                mark[j] = true;
        }
    }
    for(int i = 3; i <= M; i+= 2)
    {
        if(mark[i] == false)
        {
            prime[c++] = i;
        }
    }
}*/

ll ai[M];
ll cntr[M],cntl[M];
vector<int>ve[M];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,k;
    sfl2(n,k);
    for(ll i=0; i<n; i++)
        sfl1(ai[i]);
    map<ll,ll>ma,mb;

    ll cnt=1;
    for(ll i=0; i<n; i++)
    {
        if(ma[ai[i]]==0)
        {
            ma[ai[i]]=cnt;
            mb[cnt]=ai[i];
            cnt++;
        }
        // cout<<ai[i]<<" "<<ma[ai[i]]<<endl;
    }

    for(ll i=0; i<n ; i++)
    {
        ve[ma[ai[i]]].pb(i);
    }

    ll ans=0;
    ll a,b,c,d,e;

    for(ll i=0; i<n; i++)
    {
        if(ai[i]%k==0)
        {
            a=ai[i]/k;
            a=ma[a];
            if(ve[a].size()>0)
                a=lb(ve[a].begin(),ve[a].end(),i)-ve[a].begin();
            else a=0;

            b=ai[i]*k;
          //  pf("%lld\n",b);

            b=ma[b];
            int c=ve[b].size();
           // cout<<c<<endl;
            if(c>0)
            {
                b=ub(ve[b].begin(),ve[b].end(),i)-ve[b].begin();

                //cout<<b<<" "<<c<<endl;

                b=c-b;
            }
            else b=0;

            //pf("%lld %lld %lld\n",i,a,b);
            ans+=a*b;
        }
    }
    pfl1(ans);
}













