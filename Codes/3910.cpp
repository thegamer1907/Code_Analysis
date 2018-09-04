#include<bits/stdc++.h>
#define cin(a) cin>>a;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define cout(a) cout<<a;
#define new() cout<<endl;
#define f first
#define s second
#define fill(a,x) memset(a,x,sizeof(a));
#define loop(i,x,n) for(int i=x;i<n;i++)
#define TC() ll t;cin>>t;while(t--)
typedef long long ll;
#define MOD 1000000007
#define SIZE 100020
#define vec vector<ll>
#define vmp vector<pair<ll,ll> >
#define pb push_back
#define mp make_pair
#define all(a)         a.begin(), a.end()
#define ull unsigned long long
using namespace std;
ll nb,ns,nc;
ll pb,ps,pc;
ll cb=0,cs=0,cc=0;
ll z=0;
ll m;
bool f(ll x)
{
    ll cost=max(z,cb*x-nb)*pb+max(z,cs*x-ns)*ps+max(z,cc*x-nc)*pc;
    if(cost<=m)
        return true;
    return false;
}
int main()
{
   IOS;
   string s;
   cin>>s;
   cin>>nb>>ns>>nc;
   cin>>pb>>ps>>pc;
   cin>>m;
   for(ll i=0;i<s.length();i++)
   {
       if(s[i]=='B')
        cb++;
       else if(s[i]=='S')
        cs++;
       else
        cc++;
   }
   ll l=0,h=1e14,ans;
   while(l<=h)
   {
       ll mid=(l+h)/2;
       if(f(mid)==true)
       {
           ans=mid;
           l=mid+1;
       }
       else
        h=mid-1;
   }
   cout<<ans;
   return 0;
}
