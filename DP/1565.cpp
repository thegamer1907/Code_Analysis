#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define llu unsigned long long

int main()
{    //ios_base::sync_with_stdio(false);
      //cin.tie(NULL);
     // freopen("input.txt", "r", stdin);
   
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
      cin>>a[i];
    int p[n+1];
    memset(p,0,sizeof p);
    int total=0;
    p[0]=(a[0]==1)?1:0;
    if(a[0]==1)
      total++;
    for(int i=1;i<n;i++)
    {
      if(a[i]==1)
      {
        p[i]=p[i-1]+1;
        total++;
      }
      else
        p[i]=p[i-1];
    }
      int ans=0;
      
    for(int l=1;l<=n;l++)
    {
      for(int i=0;i<n-l+1;i++)
      {
        int j=i+l-1;
        int x=p[j]-((i==0)?0:p[i-1]);
        
        ans=max(ans,total-x+l-x);
      }
    }
    cout<<ans<<endl;
   
}