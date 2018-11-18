  #include <bits/stdc++.h>
  #define int long long
  #define vi vector<int>
  #define pii pair<int,int>
  #define pll pair<int,int>
  #define mod 1000000007
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
     string s;
     cin>>s;
     int n;
     cin>>n;
     int x=0;
     int y=0;
     while(n--)
     {
         string g;
         cin>>g;
         if(g[1]==s[0])
           x=1;
          else
             if(g[0]==s[1])
               y=1;
        if(g==s)
        {
           x=1;
           y=1;
        }   
        reverse(all(g));
         if(g==s)
        {
           x=1;
           y=1;
        }   

     }
     if(x && y)
       cout<<"YES";
     else
       cout<<"NO";



  }
  signed main()
  {

  std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    T=1;
    while(T--)
    {
      solve();
    }
    return 0;
  }