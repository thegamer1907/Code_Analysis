#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n],count=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        if(x==1)
        {
            a[i]=-1;
            count++;
        }
        else
            a[i]=1;
    }
    int dp[n];
    dp[0]=a[0];
    int max1=dp[0];
    for(int i=1;i<n;i++)
    {
        dp[i]=max(dp[i-1]+a[i],a[i]);
        if(dp[i]>max1)
            max1=dp[i];
    }
    cout << count+max1;
    return 0;
}