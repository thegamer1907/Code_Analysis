#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define int long long int
#define pb push_back
#define mp make_pair
#define f first
#define s second

const int N=3e5+5;


int32_t main()
{
     IOS;
     
     int n,k;
     
     cin>>n>>k;
     
     int a[N];
     
     for(int i=1;i<=n;i++)
     cin>>a[i];
     
     int j=0,ansy=0,ansx=1,cnt=0;
     
     for(int i=1;i<=n;i++)
     {
          j++;
          
          for(;j<=n;j++)
          {
               cnt+=(!a[j]);
               if(cnt>k)
               break;
          }
          
          j-=1;
          
          if(j-i+1>ansy-ansx+1)
          {
               ansx=i;
               ansy=j;
          }
          cnt-=(!a[i]);
          if(j>=i)
          cnt-=1;
          else
          j=i;
     }
     
     cout<<ansy-ansx+1<<endl;
     
     for(int i=ansx;i<=ansy;i++)
     a[i]=1;
     
     for(int i=1;i<=n;i++)
     cout<<a[i]<<" ";
     
     
     return 0;
}
