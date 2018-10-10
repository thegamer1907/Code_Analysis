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

using namespace std;
int a[10000005];
int an[10000005];
bool b[10000005];
vector<int> pr;
void sieve(int n)
{
  int i,j;
  memset(b,0,sizeof b);
  b[0]=1;
  b[1]=1;
  for(i=2;i<n/i;i++)
  if(!b[i])
  {
    for(j=i*i;j<n;j+=i)
    b[j]=1;
  }
  for(i=0;i<n;i++)
    if(!b[i])
      pr.pb(i);
}
int main()
{
  ios::sync_with_stdio(false);
  //freopen("output.txt","r",stdin);
  sieve(10000005);
  int i,j,n,m;
  //check(pr,8);
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>m;
    a[m]++;
  }
  //check(a,1);

  for(i=0;i<pr.size();i++)
  {
    for(j=pr[i];j<10000005;j+=pr[i])
    if(a[j])
    an[pr[i]]+=a[j];
  }

  for(i=1;i<10000005;i++)
  an[i]+=an[i-1];
  cin>>m;
  while(m--)
  {
    cin>>i>>n;
    if(i>10000000)
      cout<<0;
    else
    {
      if(n>10000000)
        n=10000000;
      cout<<an[n]-an[i-1];
    }
    cout<<endl;
  }
  return 0;
}
