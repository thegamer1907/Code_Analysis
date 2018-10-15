// Charan Sriramula (@furious__ && @msd_007)

#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long int ll;

const ll N=1e5+5;
const ll INF=1e18;
const ll mod=1e9+7;

#define f first
#define s second
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define all(v) v.begin(),v.end()
#define GCD(a,b) __gcd((a),(b))
#define LCM(a,b) ((a)*(b))/gcd((a),(b))
#define bits(x) __builtin_popcount(x)
#define OPT ios_base::sync_with_stdio(false);cin.tie(NULL);

ll a[5*N],n;

bool F(ll mid)
{
  ll out=mid,in=n-mid,j=in,cnt=0;
  for(ll i=0;i<in&&j<n;)
  {
    if(2*a[i]>a[j]){j++;continue;}
    cnt++;
    i++;
    j++;
  }
  return cnt==in;
}

int main()
{
  cin>>n;
  for(ll i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  ll low=1,high=n,mid,ans;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(F(mid)){ans=mid;high=mid-1;}
    else{low=mid+1;}
  }
  cout<<ans<<endl;
}
