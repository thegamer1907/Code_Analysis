#include <iostream>

int main(int argc, char** argv)
{
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    int sum = a[0];
    int max = 0;
    int dp[n];
    dp[0] = (a[0] == 0) ? 1 : 0 ;
    max = std::max(dp[0], 0);
    for (int i = 1; i < n; ++i)
    {
        if (a[i] == 0)
        {
            dp[i] = dp[i-1] + 1;
            max = std::max(dp[i], max);
        }
        else
        {
            ++sum;
            dp[i] = (dp[i-1] > 0) ? dp[i-1] - 1 : 0;
        }
    }
    if (sum == n)
    {
        std::cout << n - 1 << std::endl;
        return 0;
    }

    std::cout << sum + max << std::endl;
    return 0;
}
