  #include <bits/stdc++.h>
  #define int long long int
  #define vi vector<int>
  #define pii pair<long long ,long long>
  #define pll pair<int,int>
  #define mod 1000000007
  const int hell=998244353;
  #define all(x) x.begin(),x.end()
  #define mp(x,y) make_pair(x,y)
  #define mem(a,val) memset(a,val,sizeof(a))
  #define eb push_back
  #define ff first
  #define ss second
  #define rep(n) for(int i=0;i<n;i++)
  #define lb lower_bound
  #define up upper_bound
   
  
  using namespace std;
 void solve()
  {
    
    int n,k;
    cin>>n>>k;
    vi v(n);
    rep(n)
    cin>>v[i];
    k--;
    int ans=0;
    rep(n)
    {
      if(v[i]>=v[k] && v[i]>0)
        ans++;
    }
   cout<<ans;
  }
      

  signed main()
  {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    T=1;
    
    while(T--)
    {
      solve();
    }
    return 0;
  }