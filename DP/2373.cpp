#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define F  first
#define S second
#define sf(x) scanf("%d",&x)
#define pf(x) printf("%d\n",x)
#define ALL(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define mod1 1000000007LL
#define mod2 998244353LL
   map<int,string> m;

string fun(int x)
{

 return m[x];
}
void solve()
{
  int n,k;
  cin>>n>>k;
  int a[n+9];
  ll s=0,ind=1,mx=1e11;
  for(int i=1;i<=k;i++)
  {
      cin>>a[i];
      s+=a[i];

  }
  mx=s,ind=1;
  for(int i=k+1;i<=n;i++)
  {
      cin>>a[i];
      s+=a[i];
      s-=a[i-k];
      if(s<mx)
      {
          mx=s;
          ind=i-k+1;
      }
  }
  cout<<ind;

}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   //freopen("input.txt","r",stdin);
    int t=1 ;
    //cin>>t;

   /* for(int i=2;i<=1000000;i++)
    {

        if(visited[i]==0)
        {
            prime.pb(i);
            for(int j=2*i;j<=1000000;j+=i)
                visited[j]=1;
        }
    }*/

    while(t--)
     {
      solve();
     }
    return 0;
}
