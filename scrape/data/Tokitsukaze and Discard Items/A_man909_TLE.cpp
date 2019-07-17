#include<bits/stdc++.h>
#define ll long long
#define int long long
#define M 1000000007
#define sz(c) c.size()
#define fr first
#define sc second
#define pb push_back
#define sz(c) c.size()
#define ppb  pop_back
#define mp make_pair
#define all(a)      (a).begin(),(a).end()
#define rep(i,a,n)   for( int i=a ; i<n ; i++)
#define what_is(x)  cout << #x << " is " << x << endl;
#define U 1000000007
#define N 100005
using namespace std;
signed main()
{
  ios_base::sync_with_stdio(false);
 
 int n,m,k;
 cin>>n>>m>>k;
 int a[m];
 rep(i,0,m) cin>>a[i];

 int s=0,ans=0,km=k;
 rep(i,0,m)
 { //cout<<a[i]<<" "<<k<<" "<<s<<endl;
  if(a[i]<=k)
  {
    if(s==0)ans++;
    s++;
  }
  else
  {
    if(k+s>=a[i])
    {
      k=k+s;
      s=0;
      i--;
    }
    else
    { 
      k=k+s+km;
      s=0;
      i--;
    }
  }
 }
 cout<<ans;



}