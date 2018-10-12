#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test() ull t;cin>>t;while(t--)
#define pb push_back
#define mkp make_pair
#define nl cout<<endl
#define MOD 1000000007
#define loop(i,start,end) for(ull i=start;i<end;i++)
#define N 100001
#define oa(a,n) for(int i=0;i<n;i++)cout<<a[i]<<" ";nl
#define ov(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";nl
int main() 
{
    fastio();
    #ifndef ONLINE_JUDGE
      freopen("in.txt","r",stdin);
      freopen("out.txt","w",stdout);
    #endif

  string str;
  cin>>str;
  ll b,s,c,pb,ps,pc,r,nb=0,ns=0,nc=0,ans=0,cost;
  cin>>b>>s>>c>>pb>>ps>>pc>>r;
  loop(i,0,str.length())
  {
    switch(str[i])
    {
      case 'C':nc++;break;
      case 'B':nb++;break;
      case 'S':ns++;break;
    }
  }

  ll l=0,h=r+1000;
  while(l<=h)
  {
    ll mid=(l+h)/2;
    cost=pc*max(0LL,mid*nc-c) + pb*max(0LL,mid*nb-b) + ps*max(0LL,mid*ns-s);
    if(cost<=r)
    {
      l=mid+1;
      ans=mid;
      // cout<<l<<endl;
    }  
    else
      h=mid-1;
  }
  cout<<ans<<endl;




  return 0;
}