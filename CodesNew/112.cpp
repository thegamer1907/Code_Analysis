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

  int n,l;cin>>n>>l;
  int x,prev=0,mx=0;
  vector<int>v(n);
  loop(i,0,n)cin>>v[i];
  sort(v.begin(),v.end());
  loop(i,0,n)
  {
    x=v[i];
    if(i==0)
      mx=2*x;
    else
      mx=max(mx,x-prev);
    prev=x;
  }
  mx=max(mx,2*(l-x));
  cout<<fixed<<setprecision(12)<<mx/2.0;

  return 0;
}