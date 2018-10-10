//MY code , MIND it !!
#include<bits/stdc++.h>
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ll long long int
using namespace std;
int vis[10000007],v[10000007],ans[10000007],a[1000006],co[10000007];
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   memset(vis,0,sizeof(vis));
   memset(v,0,sizeof(v));
   memset(ans,0,sizeof(ans));
   memset(co,0,sizeof(co));
   int n,q,x,y;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>a[i];
       co[a[i]]++;
   }
   for(int i=2;i*i<=10000000;i++)
   {
       if(vis[i]==0)
       for(int j=i;j<=10000000;j+=i)
       {
           v[i]+=co[j];
           vis[j]=1;
       }
   }
   for(int i=sqrt(10000000)+1;i<=10000000;i++)
   {
       if(vis[i]==0)
       for(int j=i;j<=10000000;j+=i)
       {
           v[i]+=co[j];
       }
   }
   for(int i=2;i<=10000000;i++)
   {
       ans[i]=ans[i-1]+v[i];
   }
   cin>>q;
   for(int i=0;i<q;i++)
   {
       cin>>x>>y;
       if(y>10000000)
        y=10000000;
       if(x>10000000)
        x=10000000;
       cout<<ans[y]-ans[x-1]<<"\n";
   }

return 0;
}
