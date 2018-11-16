#include <iostream>

using namespace std;

int main()
{
    int n;  cin >> n;
    long long a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];

    int dp[n];
    dp[0] = 1;
    int ptr = 0;
    int dp2[n];
    dp2[0] = 1;

    for(int i = 1; i < n; i++)
    {
        if(a[i] <= a[i-1])  {dp[i] = dp[i-1];   dp2[i] = 1;   continue;}

        if(ptr == i-1)  {dp[i] = dp[i-1] + 1;   ptr++;  dp2[i] = dp[i];   continue;}
        dp[i] = max(dp[i-1], dp2[i-1]+1);
        dp2[i] = dp2[i-1] + 1;
    }

    cout << dp[n-1];

    return 0;
}
