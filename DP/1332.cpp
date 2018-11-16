#include <bits/stdc++.h>

using namespace std;
const int maxn=1e2+10;
const int INF=0x3f3f3f3f;
int n,s;
int dp[maxn][maxn];
int sum[maxn];
int a[maxn];
int main()
{
    ios::sync_with_stdio();
    while(cin>>n)
    {
       sum[0]=0;
       for(int i=1;i<=n;i++)
       {
           cin>>a[i];
           sum[i]=sum[i-1]+a[i];
       }
       int max_ans=-INF;
       int b=0;
       for(int i=1;i<=n;i++)
       {
           max_ans=max(sum[n]+(a[i]?-1:1),max_ans);
           for(int j=1;j-1<i;j++)
           {
               max_ans=max(max_ans,2*(sum[j-1]-sum[i])+i-j+1+sum[n]);
           }
       }
       cout<<max_ans<<endl;
    }
    return 0;
}
