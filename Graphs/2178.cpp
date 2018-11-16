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
#define mod2 1000000007LL
#define mod23 998244353LL

int n,m;
string s[2008];
int cnt=0;
int cc=0;

void solve()
{

  /*cin>>n>>m;

  for(int i=0;i<n;i++)
    cin>>s[i];

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        if(s[i][j]=='.')
        cnt++;

   if(cnt&1)
  {
      cout<<"Not unique";
      return ;
  }
  if(cnt==0)
  {
       for(int i=0;i<n;i++)
   cout<<s[i]<<endl;
   return ;
  }
  */
  int n,m;
  cin>>n>>m;

while(m>n)
{
if(m&1)
cnt++;
cnt++;
m=(m+1)/2;
}
cnt+=n-m;
cout<<cnt;

}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 //  freopen("input.txt","r",stdin);
    int t=1 ;
    //cin>>t;
    while(t--)
     {
    solve();
     }
    return 0;
}
