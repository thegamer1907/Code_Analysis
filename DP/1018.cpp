#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define pi  acos(-1)
#define pb  push_back
#define ft  first
#define sc  second
#define sf  scanf
#define pf  printf
#define fread(p)    freopen(p,"r",stdin);
#define fwrite(p)   freopen(p,"w",stdout);
#define mem(s,k) memset(s, k, sizeof(s))
#define fast  ios_base::sync_with_stdio(false),cin.tie(NULL);
#define hello cout<<"Hello World"<<endl;

/// moves
//int dx[]= {0,0,1,-1};/*4 side move*/
//int dy[]= {-1,1,0,0};/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/


int main()
{
    int n;
    cin>>n;
    int a[n];
    int dp[n];
    memset(dp,0,sizeof(dp));
    for(int i=0; i<n; i++)
        cin>>a[i];
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==1)
            cnt++;
        int c0=0,c1=0;
        for(int j=i; j<n; j++)
        {
            if(a[j]==0)
                c0++;
            else
                c1++;
            dp[j]=max(dp[j],c0-c1);
        }
    }
    int mx=0;
    for(int i=0; i<n; i++)
        mx=max(mx,dp[i]);
    if(mx==0)
        cout<<n-1<<endl;
    else
        cout<<mx+cnt<<endl;
}


