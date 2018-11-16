#include <bits/stdc++.h>
#define inf 1000000009
#define ll          long long
#define pb          push_back
#define F           first
#define S           second
#define N  100005
#define hell 1000000007
using namespace std;

int main()
{
        ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   int n,i,j;
   int arr[101],dp[101];
   cin>>n;
   for(i=0;i<n;i++)
    cin>>arr[i];
   if(arr[0]==0)
    dp[0]=1;
   else
    dp[0]=0;
   for(i=1;i<n;i++)
   {
       if(arr[i]==0)
        dp[i]=1+dp[i-1];
       else
        dp[i]=dp[i-1];
   }

   int mx=-101;
   for(i=0;i<n;i++)
    for(j=i;j<n;j++)
   {
       if(i==0)
       {
           int a=dp[j];
           int b=j+1-dp[j];
           mx=max(mx,a-b);
       }
       else
       {
           int a=dp[j]-dp[i-1];
           int b=j-i+1-a;
           mx=max(mx,a-b);
       }
   }
   cout<<mx+n-dp[n-1];
            }



