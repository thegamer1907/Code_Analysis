#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "../debug.hpp"
struct debugger dbg;
#else
#define debug(args...) // Just strip off all debug tokens
#endif

#define si(i) scanf("%d", &i)
#define si2(i, j) scanf("%d %d", &i, &j)
#define si3(i, j, k) scanf("%d %d %d", &i, &j, &k)
#define slli(i) scanf("%I64d", &i)
#define slli2(i, j) scanf("%I64d %I64d", &i, &j)
#define slli3(i, j, k) scanf("%I64d %I64d %I64d", &i, &j, &k)

#define pi(i) printf("%d\n", i)
#define plli(i) printf("%I64d\n", i)

#define forup(i, a, b) for (int i = (a); (i) < (b); ++(i))
#define fordn(i, a, b) for (int i = (a); (i) > (b); --(i))
#define rep(i, a) for (int i = 0; (i) < (a); ++(i))

#define mp make_pair
#define FF first
#define SS second
#define pb push_back
#define fill(a, v) memset(a, v, sizeof a)
#define ceil(a, b) (((a) % (b) == 0) ? ((a) / (b)) : ((a) / (b) + 1))
#define rem(a, b) ((a < 0) ? ((((a) % (b)) + (b)) % (b)) : ((a) % (b)))
#define MOD 1000000007LL
#define INF INT_MAX
#define N 100007

typedef long long int ll;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
typedef vector<string> VS;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<PII> VOII;
typedef vector<PLL> VOLL;
typedef vector<VI> VOVI;

int dX[] = {-1, 0, 1, 0, -1, 1, 1, -1};
int dY[] = {0, 1, 0, -1, 1, 1, -1, -1};

ll n, k;
ll A[2 * N];
ll dp[2 * N];

inline void Refresh()
{
}

ll get_suffix_sum(int idx)
{
    if (idx == 0)
    {
        return dp[n - 1];
    }
    return dp[n - 1] - dp[idx - 1];
}

ll get_prefix_sum(int idx)
{
    return dp[idx];
}

int main()
{
    memset(dp, 0, sizeof(dp));
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (i != 0)
            dp[i] = dp[i - 1] + A[i];
        else
            dp[0] = A[0];
    }

    ll ans = 0;

    for (int lft_ptr = 0, ryt_ptr = n - 1; lft_ptr < ryt_ptr; lft_ptr++)
    {
        ll pref_sum = get_prefix_sum(lft_ptr);
        while (lft_ptr < ryt_ptr && pref_sum > get_suffix_sum(ryt_ptr))
            ryt_ptr--;

        if (lft_ptr < ryt_ptr)
        {
            if (pref_sum == get_suffix_sum(ryt_ptr))
                ans = pref_sum;
            else
                ryt_ptr++;
        }
    }

    cout << ans << endl;
    return 0;
}