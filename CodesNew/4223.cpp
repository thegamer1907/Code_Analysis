#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, k, A[N];
long long P[N];
pair < int , int > Mx;
inline bool Solve(int t, int i)
{
    return (1ll * (i - t + 1) * A[i] - P[i] + P[t -1] <= k);
}
int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
        scanf("%d", &A[i]);
    sort(A + 1, A + n + 1);
    for (int i = 1; i <= n; i++)
        P[i] = P[i - 1] + A[i];
    for (int i = 1; i <= n; i++)
    {
        int l = 0, r = i, md;
        while (r - l > 1)
        {
            md = (l + r) >> 1;
            if (Solve(md, i))
                r = md;
            else
                l = md;
        }
        if (Mx.first < i - l)
            Mx.first = i - l, Mx.second = A[i];
    }
    return !printf("%d %d", Mx.first, Mx.second);
}
