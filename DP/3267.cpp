#include<bits/stdc++.h>
#define pb push_back
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll ;
const int dx[4]={-1,1,0,0};
const int dy[4]={0,0,-1,1};
ll ans,n,m,x,nb,curans,myprev; string s,key ;
vector < ll > v , primes ;
const ll N = 1e7 + 1 ;
int done[N];
ll acc[N];
ll spf[N];
   inline char nc(){
    static char buf[100000],*p1=buf,*p2=buf;
    return p1==p2&&(p2=(p1=buf)+fread(buf,1,100000,stdin),p1==p2)?EOF:*p1++;
}

template<typename T = int>
inline T nxt(){
    char c=nc();T x=0; int f=1;
    for(;c>'9'||c<'0';c=nc())if(c=='-')f=-1;
    for(;c>='0'&&c<='9';x=x*10+c-'0',c=nc());
    x*=f;
    return x;
}
void pre()
{




    memset(acc,0,sizeof(acc));
    memset(done,-1,sizeof(done));
    for(int i=0;i<=1e7;i++) spf[i] = i ;
    for(int i=2;i*i<=N;i++)
        if(spf[i]==i)
            {
                for(int j=i*i;j<=1e7;j+=i)
                    if(spf[j]==j)
                        spf[j] = i ;


            }


    //cout<<primes.size()<<" "<<primes[0]<<" "<<primes[primes.size()-1];



}
int id = 0 ;

void decomp(ll x)
{


    while(x!=1)
        {
        if(done[spf[x]]!=id) acc[spf[x]]++,done[spf[x]] = id ;

        x/=spf[x];

        }


}

void solve()
{

    ll n,m ;

    n=nxt();

    for(int i=0;i<n;i++) x=nxt(),id=i,decomp(x);

    for(int i=3;i<=1e7;i++) acc[i]+=acc[i-1];

   // for(int i=0;i<=20;i++) cout<<acc[i]<<" ";

   //cout<<'\n';

    m = nxt();
    while(m--)
        {

            ll l,r;

            l=nxt(); r=nxt();
            l = min(N-1,l);
            r = min(N-1,r);

            cout<<acc[r] - acc[l-1]<<'\n';

        }



}





signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("test.in","r",stdin);
    //freopen("out.txt","w",stdout);
    pre();
    solve();
    return 0;
}
