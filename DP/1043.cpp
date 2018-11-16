#include<bits/stdc++.h>

using namespace std;
#define N 102

int n;
bool a[N];
int dp[N][N];

int solve(int i, int j)
{
    if(i == n  ||  j == n)
        return -1e9;

    int &ret = dp[i][j];
    if(ret != -1)
        return ret;

    ret = 0;
    for(int k = i; k <= j; ++k)
        a[k] = 1 - a[k];
    for(int k = 0; k < n; ++k)
        if(a[k]) ++ret;
    for(int k = i; k <= j; ++k)
        a[k] = 1 - a[k];

    for(int a = i; a < n; ++a)
    for(int b = a; b < n; ++b)
    ret = max(ret, solve(a,b));
    return ret;
}

int main()
{
    memset(dp, -1, sizeof dp);
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];


    cout << solve(0,0);
    return 0;
}
