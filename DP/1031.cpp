#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int dp [102];
int a[103];

int main()
{
   int n;
   cin>>n;
   int sm=0;
   int mx=-1;
   for(int i=0;i<n;i++)cin>>a[i],sm+=a[i];
   for(int i=1;i<=n;i++)
   {
       if(a[i-1]==0){dp[i]=dp[i-1]+1;}
       else
       {
           dp[i]=max(dp[i-1]-1,0);
       }
       mx=max(dp[i],mx);
   }
   if(mx==0)cout<<sm-1;//if all are 1;
   else
    cout<<sm+mx<<endl;

}
