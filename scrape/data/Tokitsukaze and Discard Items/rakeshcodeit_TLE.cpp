#include<bits/stdc++.h>
#define MOD 1e9+7
using namespace std;
#define  pb push_back
#define  po pop_back
#define  mp make_pair
#define clr(a) memset(a,0,sizeof(a))
#define neg(a) memset(a,-1,sizeof(a))
#define fas(a) memset(a,false,sizeof(a))
#define debug(x) cout<<#x<<": "<<x<<endl
#define debug1(x) cout<<#x<<": "<<x<<" "
#define rev(x) reverse(x.begin(), x.end())
#define int long long 
#define F first
#define S second
void printvector(std::vector<int> v){  for (int i = 0; i < v.size(); ++i){cout<<v[i]<<" ";}cout<<""<<endl;}
void printarray(int a[],int n){for (int i = 0; i < n; ++i){cout<<a[i]<<" ";}cout<<""<<endl;}
 int32_t main() 
{
 
  #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
  #endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,m,k;
  cin>>n>>m>>k;
  int l=0;
  int a[m];
  for (int i = 0; i < m; ++i)
  {
    cin>>a[i];
  }
  int e=k;
  int ans=0;
  int p=0;
  while(l<m)
  {
    if(a[l]>e)
    {
      e=e+k;
      continue;
    }
    ans++;
    int sum=0;
    while(a[l]<=e)
    {
      l++;
      sum++;
    }
    e=e+sum;
  }
  cout<<ans<<endl;
  return 0;

}