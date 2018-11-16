#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int dp[105][105];
int a[105];
int main()
{
    int n,i,j ,maxi=0,k;
    bool flag;
    while(scanf("%d",&n)!=EOF)
    {

         flag=true;
         k=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            dp[i][i]=(!a[i])?1:0;
            k+=a[i]?1:0;
            if(dp[i][i])
                {
                    flag=false;

                }
        }
       if(!flag)
        {
             maxi=1;
            for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
            {
                dp[i][j]=dp[i][j-1]+((!a[j])?1:0);
                maxi=max((dp[i][j]-(j-i+1-dp[i][j])),maxi);
            }
            cout<<maxi+k<<endl;
        }
        else
        {
            cout<<n-1<<endl;
        }
    }
}
