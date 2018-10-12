#include <bits/stdc++.h>

using namespace std;

template <typename T>
inline T in(T& x){T t;   cin >> t;   x = t; return t;}

long long sum[200010], a[200010];

int main()
{
    int n, t;
    cin >> n >> t;
    for(int i = 1; i <= n; i++)
        in(a[i]), sum[i] = sum[i-1] + a[i];

    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        int ptr = upper_bound(sum, sum+n+1, sum[i-1]+t) - sum;
        if(sum[ptr] - sum[i-1] > t || ptr > n)
            ptr --;
        ans = max(ans, ptr - i +1);
    }
    cout << ans;
    return 0;
}
