#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);

    int n;
    cin >> n;

    int arr[n];
    int dp[n];
    for(int i = 0 ; i <n ; i++)
        cin >> arr[i] , dp[i] = 1;

    for(int i = 1 ; i < n ; i++)
        if(arr[i] > arr[i-1])
            dp[i] = dp[i-1]+1;
    int ans = 0;
    for(int i = 0 ; i < n ; i++)
        ans = max(ans , dp[i]);

    cout << ans;

    return 0;
}
