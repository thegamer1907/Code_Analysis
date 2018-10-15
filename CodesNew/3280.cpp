#include<bits/stdc++.h>
#define ll long long
#define loop int a[n]; for(i=0;i<n;i++)
#define lloop ll a[n]; for(i=0;i<n;i++)
#define tcase int t; cin>>t; while(t--)
#define max(a,b) (a>b?a:b)
#define check(a,b) for(i=0;i<b;i++) cout<<a[i]<<' '; cout<<endl;
#define pb push_back
#define min(a,b) (a<b?a:b)
#define g(a) (a*(a-1))/2
#define fi first
#define se second
#define M 1000000007
#define pi 3.14159265
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  //freopen("output.txt","r",stdin);
  int n;
  cin>>n;
  ll s=0,a=0,b;
  for(int i=0;i<n;i++)
  {
    cin>>b;
    a=max(a,b);
    s+=b;
  }
  s=(ll)ceil(s/(double)(n-1));
  cout<<max(s,a);
  return 0;
}