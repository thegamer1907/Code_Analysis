#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int a,b;
     cin>>a>>b;
     int ans=1;
     for(int i=1;i<=min(a,b);i++)
      ans*=i;
     cout<<ans;    
}