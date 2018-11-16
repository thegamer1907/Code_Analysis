#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ;i<n;i++)
        cin >> arr[i];
    int initial_score = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            initial_score++;
    }
    int dp[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            dp[i] = -1;
        else
            dp[i] = 1;
    }
    int global_sum = dp[0];
    int current_sum = dp[0];
    for (int i = 1; i < n; i++)
    {
        if (current_sum <= 0)
            current_sum = dp[i];
        else
            current_sum = current_sum + dp[i];
        global_sum = max(global_sum, current_sum);
        if (current_sum < 0)
            current_sum = dp[i];
    }
    cout << initial_score + global_sum << endl;
}