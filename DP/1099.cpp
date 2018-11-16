#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int dp[n];
    int cnt=0;


    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];

        if(a[i]==1)
            {
                a[i]=-1;
                cnt++;
            }
        else
            a[i]=1;

        if(cnt==n)
        {
            cout<<n-1;
            return 0 ;
        }

    }


    dp[0]=a[0];
   // cout<<dp[0]<<" ";

    for(int i=1 ; i<n ; i++)
    {
        dp[i]=max(dp[i-1]+a[i],a[i]);
        //cout<<dp[i]<<" ";
    }
    sort(dp,dp+n);
    cout<<dp[n-1]+cnt;


    return 0;
}
