#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];
    int dp[n][n];
    int num=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            dp[i][j]=0;
        }
    }
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
        if(A[i]==1)
        {
            num++;
        }
    }
    if(A[0]==1)
    {
        dp[0][0]=-1;
    }
    else
    {
        dp[0][0]=1;
    }
    for(int i=1; i<n; i++)
    {
        if(A[i]==1)
        {
            dp[0][i]=dp[0][i-1]-1;
        }
        else
        {
            dp[0][i]=dp[0][i-1]+1;
        }
    }
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i>j)
            {
                dp[i][j]=0;
            }
            else
            {
                dp[i][j]=dp[0][j]-dp[0][i-1];
            }
        }
    }
    int big=dp[0][0];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(dp[i][j]>big)
            {
                big=dp[i][j];
            }
        }

    }
    if(num==n)
    {
        num--;
    }
    if(num+big==-1)
    {
        num++;
    }
    cout << num+big;
}