
/*****************Bismillahir Rahmanir Rahim***********************/

#include<bits/stdc++.h>
using namespace std;
/********Mohammad********/

/**********SOHAG***********/
#define     ll              long long int
#define pf                  printf()
#define s1(a)              scanf("%lld",&a)
#define s2(a,b)            scanf("%lld %lld",&a,&b)
#define s3(a,b,c)          scanf("%lld %lld %lld",&a,&b,&c)
#define s4(a,b,c,d)        scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
#define s5(a,b,c,d,e)      scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e)
#define     pb              push_back
#define     popb            pop_back
#define     ull             unsigned long long int
#define     max3(a,b,c)     max(a,max(b,c))
#define     max4(a,b,c,d)   max(max3(a,b,c),d)
#define     min3(a,b,c)     min(a,min(b,c))
#define     min4(a,b,c,d)   min(a,min3(b,c,d))
#define     MOD             1000000007
#define     mem(a,v)        memset(a,v,sizeof(a))
#define     mp              make_pair
#define     check           printf("check")
#define     sqr(x)          (x)*(x)
#define     all(v)          v.begin(),v.end()
#define     fast            ios_base::sync_with_stdio(0);cin.tie(0)
#define     pii             pair<int,int>
#define     pll            pair<ll,ll>
#define     MAX             999999999999999999
#define     MIN             -100000000000014
#define     Fread           freopen("input.txt","r",stdin);
#define     Fwrite          freopen("output.txt","w",stdout);


/************************Alhamdulillah*************************/
ll visited[100001],R=1;
vector<ll>graph[100001];
ll DFS(ll s,ll m)
{
     visited[s]=1;
     for(ll i=0;i<graph[s].size();i++)
     {
          ll v=graph[s][i];

          if(visited[v]==0)
          {
               visited[v]=1;
               if(visited[m]==1)
          {
               cout<<"YES";
               R=0;
               return 0;
          }
               DFS(v,m);
          }
     }
}
int main()
{
    ll a,b,n,i,j,m,c=0,s=0,d,k,l,p,x,y;
    cin>>n>>m;
    for(i=1;i<n;i++)
    {
         cin>>a;
         s=a+i;
         graph[i].pb(s);

    }
      ll M=DFS(1,m);
     if(R==1) cout<<"NO";

    return 0;
}
