#include <bits/stdc++.h>

using namespace std;

int n , acum[105] , arr[105];
int main()
{
    scanf("%d",&n);
    for(int i = 1; i <= n; ++i)
        scanf("%d",&acum[i]), arr[i] = acum[i];

    for(int i = 1; i <= n; ++i)
            acum[i] += acum[i - 1];

    int ans = 0 , last = acum[n];
    for(int i = 1; i < n + 1; ++i)
    {
        for(int j = i; j < n + 1; ++j)
        {
            int cur = acum[j] - acum[i - 1];
            int dist= j - i + 1;
            int rem = last - acum[j] + (acum[i - 1]);
            ans = max(ans ,- cur + dist + rem);
        }
    }
    cout << ans << "\n";




    return 0;
}
