#include <bits/stdc++.h>

using namespace std;

int solve(int n, long long k)
{
    if (k == (1LL << (n - 1))) return n;
    if (k <= (1LL << (n - 1))) return solve(n - 1, k);
    return solve(n - 1, k - (1LL << (n - 1)));
}

int main()
{
    ios_base::sync_with_stdio(false);
    long long n, k;
    cin >> n >> k;
    cout << solve(n, k);
    return 0;
}
