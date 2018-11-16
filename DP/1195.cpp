#include<bits/stdc++.h>

using namespace std;

int n;
int arr[101];
int dp[101][101];

int solve(int i, int j, int counter)
{
    if(i == n || j == n)
        return 0;

    if(dp[i][j] != -1)
        return dp[i][j];

    for(int a = 0; a<n ; a++)
    {
        if(a >= i && a <= j)
            counter+= 1-arr[a];
        else
            counter+= arr[a];
    }
    dp[i][j] = counter;

    solve(i, j+1,0);
    solve(i+1, j+1,0);
}

int main()
{
    memset(dp, -1, sizeof dp);
    memset(arr,0,sizeof arr);
    int maxi=-1;
    cin >> n;
    for (int i=0 ; i<n ; i++)
        cin >> arr[i];
    solve(0,0,0);
    for(int i=0 ; i<n; i++)
        for(int j=0 ; j<n ; j++)
            maxi=max(maxi,dp[i][j]);
    
    cout << maxi << endl;
    return 0;
}
