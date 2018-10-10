#include <bits/stdc++.h>
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

int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}
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

#define M 1000006
#define mod 1000000007

ll pw1[M],pw2[M];

string st;
ll bs1,bs2;

void bpow()
{
    pw1[0]=pw2[0]=1;
    for(ll i=1;i<M;i++)
    {
        pw1[i]=(pw1[i-1]*bs1)%mod;
        pw2[i]=(pw2[i-1]*bs2)%mod;
    }
}
vector<ll>vc;

int fun(ll n,ll l)
{
   // pfl2(n,l);

    ll a1,a2,m2,i,j,k,m1;
    a1=0;
    m1=0;
    a2=0;
    m2=0;

    for(i=0;i<n;i++)
    {
        m1=(m1*bs1+st[i]-'a')%mod;
        m2=(m2*bs2+st[i]-'a')%mod;
    }
    for(i=1;i<=n;i++)
    {
        a1=(a1*bs1+st[i]-'a')%mod;
        a2=(a2*bs2+st[i]-'a')%mod;
    }

    if(a1==m1&&a2==m2)return 1;

    for(i=n+1;i<l-1;i++)
    {
        a1=a1-(pw1[n-1]*(st[i-n]-'a'));
        a1=(a1*bs1+st[i]-'a')%mod;

        a2=a2-(pw2[n-1]*(st[i-n]-'a'));
        a2=(a2*bs2+st[i]-'a')%mod;

        if(a1<0)a1+=mod;
        if(a2<0)a2+=mod;

        if(a1==m1&&a2==m2)return 1;

    }
    return 0;

}

int main()
{
    //freopen("input.txt","r",stdin);
     //freopen("output.txt","w",stdout);
    cin>>st;
    bs1=29;bs2=31;
    bpow();

    ll a1,b1,a2,b2,i,j,k,l,le,ri,m,ans,ok;

    l=st.size();
    a1=0;
    a2=0;
    b1=0;
    b2=0;
    ok=0;
    for(i=0;i<l-2;i++)
    {
        a1=(a1*bs1+st[i]-'a')%mod;
        a2=(a2*bs2+st[i]-'a')%mod;

        b1=((st[l-i-1]-'a')*pw1[i]+b1)%mod;
        b2=((st[l-i-1]-'a')*pw2[i]+b2)%mod;
       // pfl1(pw2[i]);
       // pfl4(a1,b1,a2,b2);

        if(a1==b1&&a2==b2){
                vc.pb(i+1);
              ok=1;
        }
    }
    //pf("ok\n");
    le=0;
    ri=vc.size()-1;
    int ck=0;
    ans=-1;
    if(ok==1)
    while(le<=ri)
    {
        m=(le+ri)/2;
        //pfl3(vc[m],le,ri);
        ck=fun(vc[m],l);
        //pf("2\n");
        if(ck==1)
        {
            le=m+1;
            ans=max(ans,vc[m]);
        }
        else{
            ri=m-1;
        }

    }
    if(ans>=0)
    for(i=0;i<ans;i++)pf("%c",st[i]);
    else pf("Just a legend");
    pf("\n");
}












