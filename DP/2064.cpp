
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[100005]={0};
    int barr[n];
    int dp[n];
    for(int i=0; i<n; i++)
    {
        cin >> barr[i];
    }
    dp[n-1]=1;
    arr[barr[n-1]]=1;
    for(int i=n-2; i>=0; i--)
    {
        if(arr[barr[i]]==1)
        {
            dp[i]=dp[i+1];
        }
        else
        {
            dp[i]=dp[i+1]+1;
            arr[barr[i]]=1;
        }
    }

    for(int i=0; i<m; i++)
    {
        int c;
        cin >> c;
        cout << dp[c-1] << endl;
    }

    return 0;
}
