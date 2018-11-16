// Codeforces Round #191 - Problem A: Flipping Game (http://codeforces.com/problemset/problem/327/A)
#include <bits/stdc++.h>

using namespace std;

#define LOG(var, sep) (cerr << #var << " = " << (var) << (sep))
#define REP(i, a, b) for (int (i) = (a); (i) <= (b); (i)++)

const int MAX { 110 };

int as[MAX], sum[MAX];

void solve(int N)
{
    REP(i, 1, N)
        sum[i] = sum[i - 1] + as[i];

    int best = -MAX, a = 0, b = 0;

    REP(i, 1, N)
    {
        REP(j, i, N)
        {
            int ones = sum[j] - sum[i - 1];            
            int zeroes = (j - i + 1) - ones;
            int diff = zeroes - ones;

            if (diff > best)
            {
                best = diff;
                a = i;
                b = j;
            }
        }
    }

    REP(i, a, b)
        as[i] = 1 - as[i];

    int ans = 0;

    REP(i, 1, N)
        ans += as[i];

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    REP(i, 1, N)
        cin >> as[i];

    solve(N);

    return 0;
}
