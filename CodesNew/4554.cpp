#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define eps 1e-9
#define pp pair < pair<ll,ll> , ll> 
#define fo(i,j,k) for(int i=j;i<=k;i++)
#define foll(i,j,k) for(ll i=j;i<=k;i++)
#define clr(a) memset(a,0,sizeof(a))
#define vi vector<int>
#define vll vector<ll>
#define sz(a) a.size()
#define len(a) a.length()
#define all(a) a.begin(),a.end()

const int N = 1e5+5;
using namespace std;
ll power(ll x, ll y)
{
  ll res = 1;
  while(y>0)
  {
    if(y&1)
       {
         res = (res*x)%mod;
        }
     x = (x*x)%mod;
     y = y>>1;
  }
    return res;
}
std::vector<int> divi[100004];

void divisor(int n)
{
   for(int i=1;i<=n;i++)
   {
     for(int j=i;j<=n;j+=i)
     {
       divi[j].pb(i);
     }
   }
}
int prime[10004];
void seive(int n)
{
  for(int i=2;i<=n;i++)
  {
    if(!prime[i])
    {
      for(int j=2*i;j<=n;j+=i)
      {
        prime[j] = 1;  
      }
    }
  }
}

int bs(int low,int high,int a[],int val)
{
  while(low<high)
  {
    int mid = (low + high)/2;
    if(a[mid]>=val)
    {
      high = mid;
    }
    else{
      low = mid+1;
    }
  }
  if(a[low]==val)
    return low+1;
  return -1;
}
vll v[3004];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    sort(a,a+n);
    int i=(n-1)/2,j=n-1;
    int cnt=0;
    while(j>(n-1)/2 && i>=0)
    {
      if(a[j]>=2*a[i])
      {
        j--;
        i--;
        cnt++;
      }
      else{
        i--;
      }
    }
    cout<<n-cnt<<endl;
    return 0;

}
