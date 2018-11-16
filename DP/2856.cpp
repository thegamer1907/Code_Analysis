#include<bits/stdc++.h>
using namespace std;
long long i,j,n,m,dp[2005][2005],k,rez;
int main()
{
    std::cin.sync_with_stdio(false);
    cin >> n >> m;
    i=1;
    while (i<=n)
    {
        dp[1][i]=1;
        i++;
    }
    i=1;
    while (i<m)
    {
        j=1;
        while (j<=n)
        {
            k=1;
            while (k*j<=n)
            {
                dp[i+1][j*k]+=dp[i][j];
                dp[i+1][j*k]%=1000000007;
                k++;
            }
            j++;
        }
        i++;
    }
    i=1;
    while (i<=n)
    {
        rez+=dp[m][i];
        rez%=1000000007;
        i++;
    }
    cout << rez;
    return 0;
}
