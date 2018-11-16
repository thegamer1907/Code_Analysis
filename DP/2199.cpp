#include<bits/stdc++.h>
using namespace std;
 
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 << endl; prints xxx77
//setprecision - cout << setprecision (14) << f << endl; Prints x.xxxx
//cout.precision(x)  cout<<fixed<<val;  // prints x digits after decimal in val


#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
#define repa(i,a,n) for(int i=a;i<=n;i++)
#define repd(i,a,n) for(int i=a;i>=n;i--)
#define trav(a,x) for(auto& a:x)
#define all(c) c.begin(), c.end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz(a) a.size()
#define pi 3.14159265358979323846
#define MAX (1000*1000*1000+7)
#define inf (1000*1000*1000+9)
#define vi vector<int>
#define pii pair<int,int>
#define pqueue priority_queue<int>
#define pdqueue priority_queue<int,vi,greater<int> >

int32_t main()
{
  fast;
  
  int n,m,val;
  vi c,dp;
  int v[100005];
  map<int,int> mp;
  cin>>n>>m;

  rep(i,n)
  {
    cin>>val;
    c.pb(val);
  }
  repd(i,n,1)
  {
    if(mp[c[i-1]]==0)
    {
      v[i]=1;
      mp[c[i-1]]++;
    }
    else
      v[i]=0;
  }
  dp.pb(0);
  repa(i,1,n)
  {
    dp.pb(dp[i-1]+v[i]);
  }

  while(m--)
  {
    cin>>val;
    cout<<dp[n]-dp[val-1]<<endl;
  }
  return 0;
}