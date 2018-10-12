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
#define N 10000001
#define oa(a,n) for(int i=0;i<n;i++)cout<<a[i]<<" ";nl
#define ov(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";nl
int spf[N];
int prime[N];
ll cum[N+100];
void sieve(ull n)
{
    for (int i=2;i*i<=n;i++)
    {
        if (prime[i]==0)
        {
            for (int j=i*2; j<=n; j += i)
                prime[j] = 1,spf[j]=min(spf[j],i);
        }
    }
}
int main() 
{
    fastio();
    #ifndef ONLINE_JUDGE
      freopen("in.txt","r",stdin);
      freopen("out.txt","w",stdout);
    #endif
  loop(i,1,N+1)
    spf[i]=i;
  sieve(N-1);
  ll n,q,mx=0;cin>>n;
  vector<ll>v(n);
  loop(i,0,n)cin>>v[i],mx=max(v[i],mx);
  loop(i,0,n)
  {
    int num=v[i];
    while(num>1)
    {
      int val=spf[num];
      while(spf[num]==val)
      {
        num/=spf[num];
      }
      cum[val]++;
    }
  }
  loop(i,1,N+1)
  {
    cum[i]+=cum[i-1];
    // cout<<i<<" "<<cum[i]<<endl;
  }
  cin>>q;
  while(q--)
  {
    int l,r;
    cin>>l>>r;
    l=min(l,N);
    r=min(r,N);
    cout<<cum[r]-cum[l-1]<<endl;
  }


  return 0;
}