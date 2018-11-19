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
ll h,m,s,t1,t2,h1,m1,s1;

sff(h,m);
sff(s,t1);
sf(t2);

h1 = h;
m1 = m;
s1 = s;

ll mp[14];

for(ll k = 0;k<=12;k++)
mp[k] = 0;

if(m1>0||s1>0) mp[h] = 2;
else mp[h] = 1;

//cout<<h<<" "<<mp[h]<<endl;

m = m/5;

if(m1%5!=0||s1>0) { if(m==0) m = 12; mp[m] = 2; }
else { if(m==0) m = 12; mp[m] = 1; }


s = s/5;

if(s1%5!=0) { if(s==0) s = 12; mp[s] = 2; }
else { if(s==0) s = 12; mp[s] = 1; }


ll i,j;

bool f1 = false;
bool f2 = false;

for(j = t1;;j++)
{
  if(mp[j]!=0)
  {
    if(mp[j]==2&&j==t2) f1 = true;
    break;
  }
  else if(j==t2) { f1 = true; break; }

  if(j==12) j = 0;
}

for(j = t2;;j++)
{
  if(mp[j]!=0)
  {
    if(mp[j]==2&&j==t1) f2 = true;
    break;
  }
  else if(j==t1) { f2 = true; break; }

  if(j==12) j = 0;
}

if(f2==true||f1==true) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}
