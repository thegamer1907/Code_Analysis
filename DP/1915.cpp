// Codeforces Round #215 - Problem B: Sereja and Suffixes (http://codeforces.com/problemset/problem/368/B)
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<ll, ll>;

#define REP(i, a, b) for (int (i) = (a); (i) <= (b); (i)++)
#define REPN(i, N) for (int (i) = 0; (i) < N; (i)++)
#define DEC(i, b, a) for (int (i) = (b); (i) >= (a); (i)--)
#define DECN(i, N) for (int (i) = N - 1; (i) >= 0; (i)--)

#define LOG(var, sep) (cerr << #var << " = " << (var) << (sep))
#define LOGM(msg) (cerr << (msg))
#define LOGV(vec, sep) { cerr << #vec << " ="; for (const auto& v : (vec)) cerr << " " << v; cerr << (sep); }
#define LOGA(arr, N, sep) { cerr << #arr << " ="; for (int i = 0; i < N; ++i) cerr << " " << (arr)[i]; cerr << (sep); }
#define LOGA2(arr, N, M, sep) { cerr << #arr << " =\n"; for (int i = 0; i < N; ++i) { for (int j = 0; j < M; ++j) cerr << (arr)[i][j] << " "; cerr << endl; } cerr << (sep); }

ostream& operator<<(ostream& os, const ii& p)
{
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

const int MAX { 100010 };
const int oo { 2000000010 };
const int MOD { 1000000007 };

int as[MAX], ls[MAX], ans[MAX];
bitset<MAX> found;

void solve(int N, int M)
{
    DEC(i, N, 1)
    {
        found[as[i]] = true;
        ans[i] = found.count();
    }

    REPN(i, M)
        cout << ans[ls[i]] << '\n';
}

int main()
{
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    REP(i, 1, N)
        cin >> as[i];

    REPN(i, M)
        cin >> ls[i];

    solve(N, M);

    return 0;
}
