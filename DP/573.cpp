#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n, m;
    cin >> m;
    n = s.size();

    int dp[100000+5]={0};
    for(int i=1; i<n; i++)
    {
        if(s[i]==s[i-1])dp[i]=dp[i-1]+1;
        else dp[i]=dp[i-1];
    }
    dp[n]=dp[n-1];
    for(int i=0; i<m; i++)
    {
        int l,r;
        cin >> l >> r;


        cout<<dp[r-1]-dp[l-1]<<endl;
    }

    ///for(int i=0; i<n; i++)cout<<dp[i]<<endl;

}
