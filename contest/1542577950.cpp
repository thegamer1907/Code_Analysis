#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(ll i = 1;i<=n;i++)
#define rep0(i,n) for(ll i = 0;i<n;i++)
#define reps(i,a,n) for(ll i = a;i<=n;i++)
#define sf(n) scanf("%lld",&n)
#define sff(n,m) scanf("%lld %lld",&n,&m)
#define pf(n) printf("%lld\n",n)
#define pfs(s) printf("%s\n",s)
#define bug printf("%BUG\n")
#define pfstr(s) printf("%s\n",s.c_str())
#define cs(i,n) printf("Case %lld: %lld\n",i,n)
#define clr(dp,v) memset(dp,v,sizeof dp)
#define pb push_back
#define mp make_pair
#define PLL pair<ll,ll>
#define ff first
#define ss second
#define mx 100000

int main()
{

string s,p;
vector<string>v;
ll n;

cin>>s;
cin>>n;

while(n--)
{
  cin>>p;
  v.pb(p);
}

ll sz  = v.size();

bool ans = false;

p = "";

for(ll i  = 0;i<sz;i++)
{
  for(ll j = 0;j<sz;j++)
  {
    p = v[i]+v[j];
    if (p.find(s) != string::npos) { ans = true;  goto yo; }
  }
}

yo:

if(ans) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}
