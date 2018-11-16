
 /****************************************************************************************
 *                                                                                       *
 *   #######             ###############          #       #           #           #      *
 *   #      #                  #                  #     #             #           #      *
 *   #       #                 #                  #   #               #           #      *
 *   #        #                #                  # #                 #           #      *
 *   #        #                #                  #                   #           #      *
 *   #        #                #                  # #                 #           #      *
 *   #       #                 #                  #   #               #           #      *
 *   #      #                  #                  #     #             #           #      *
 *   #######             ##############           #       #           #############      *
 *                                                                                       *
 ****************************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pll pair<ll,ll>
#define vl vector<ll>
#define vll vector<pll>
#define um unordered_map<ll,ll>
#define mll map<ll,ll>
#define pq priority_queue<ll>
#define pql priority_queue<ll,vector<ll>,greater<ll>>

#define rp(i,b) for(i=0;i<b;i++)
#define rpi(i,a,b) for(i=a;i<b;i++)
#define lct long long t;cin>>t;while(t--)

#define il(a) long long a;cin>>a;
#define il2(a,b) long long a,b;cin>>a>>b;
#define il3(a,b,c) long long a,b,c;cin>>a>>b>>c;
#define il4(a,b,c,d) long long a,b,c,d;cin>>a>>b>>c>>d;
#define il5(a,b,c,d,e) long long a,b,c,d,e;cin>>a>>b>>c>>d>>e;
#define id(a) double a;cin>>a;
#define id2(a,b) double a,b;cin>>a>>b;
#define id3(a,b,c) double a,b,c;cin>>a>>b>>c;
#define id4(a,b,c,d) double a,b,c,d;cin>>a>>b>>c>>d;
#define id5(a,b,c,d,e) double a,b,c,d,e;cin>>a>>b>>c>>d>>e;
#define ia(a,n) vl a;for(ll i=0;i<n;++i) {ll x;cin>>x;a.pb(x);}
#define ian(a,n) ll n;cin>>n;vl a;for(ll i=0;i<n;++i) {ll x;cin>>x;a.pb(x);}
#define ia2(a,m,n) ll m,n;cin>>m>>n;ll a[m+4][n+4];for(ll i=0;i<m;++i)for(ll j=0;j<n;++j)cin>>a[i][j];
#define is(s,n) string s;cin>>s;ll n;n=s.size();

#define pa(a,n) for(ll i=0;i<n;++i) cout<<a[i]<<" ";cout<<endl;
#define pa2(a,m,n) for(ll i=0;i<m;++i){for(ll j=0;j<n;++j)cout<<a[i][j]<<" ";cout<<endl;}
#define pd(z,k) cout<<fixed<<setprecision(k)<<z<<endl;

#define pb push_back
#define all(c)    (c).begin(),(c).end()
#define allr(c)   (c).rbegin(),(c).rend()
#define ST(c,n)    sort((c).begin(),(c).begin()+n)
#define lb(c,x) lower_bound(all(c),x)-c.begin()
#define up(c,x) upper_bound(all(c),x)-c.begin()
#define F first
#define S second
#define mem(x,val) memset(x,val,sizeof(x))
#define v2d(type,v,m,n,val) vector<vector<type>>v(m+3,vector<type>(n+3,val));

#define spresent(c,x)    ((c).find(x) != (c).end())
#define present(c,x)   (find(all(c),x) != (c).end())
#define count1(a)    __builtin_popcountll(a)
#define power2(a)      (a)&(a-1)==0
#define sz(a)           ll((a).size())

const long long mod = 1e9+7;
const long long M = 1e6+5;
const double pi=acos(-1.);
const long long dx[]={1,0,-1,0,-1,-1,1,1};
const long long dy[]={0,1,0,-1,1,-1,1,-1};

ll c,d,e,f,g,h,i,j,k,l,m,o,p,q,r,s,t,u,v,w,y,z,n,maxi,mini,ans,mid,low,high;
string s1,s2;

ll strtoll(string s) { stringstream str(s); ll number=0; str>>number; return number; }
string lltostr(ll n){ stringstream ss; ss<<n; return ss.str(); }
double power(double x, ll y){ double res = 1;
    while (y > 0){  if (y & 1)  res = (res*x);  y = y>>1; x = (x*x);  }   return res; }

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;ll a[n+4];
    for(i=1;i<=n;++i)
    {
    	cin>>a[i];
    }
    for(i=1;i<=n;++i)
    {
    	j=i;c=0;
    	while(j!=-1)
    	{
    		j=a[j];++c;
    	}
    	ans=max(ans,c);
    }
    cout<<ans;
}
