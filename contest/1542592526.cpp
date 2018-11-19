#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define llu unsigned long long
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

#define M 100006
#define mod 1000000007


int main()
{
    //freopen("input.txt","r",stdin);
     //freopen("output.txt","w",stdout);
     //ios_base::sync_with_stdio(false);    cin.tie(NULL);
     string st,s[110],s1;
     int n,j,k,l,ck,i;
     cin>>st>>n;
     ck=0;

     for(i=0;i<n;i++)
     {
         cin>>s[i];
         if(s[i]==st)ck=1;
     }
     if(ck==0)
     {
         for(i=0;i<n;i++)
         {
             for(j=0;j<n;j++)
             {
               //  if(i==j)continue;
                 s1=s[i][1];
                 s1=s1+s[j][0];
                 if(s1==st)ck=1;
             }
         }
     }
     if(ck==1)pf("YES\n");
     else pf("NO\n");
}













