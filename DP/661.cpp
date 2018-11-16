// Codeforces Round #186 - Problem B: Ilya and Queries (http://codeforces.com/problemset/problem/313/B)
#include <bits/stdc++.h>

using namespace std;

using ii = pair<int, int>;

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

const int MAX { 2000010 };
const int oo { 2000000010 };
const int MOD { 1000000007 };

ii queries[MAX];
int psum[MAX];

void solve(string& S, int M)
{
    int n = S.size();
    S = "+" + S;
 
    REP(i, 1, n)
        psum[i] = psum[i - 1] + (S[i - 1] == S[i] ? 1 : 0);

//LOGA(psum, n + 1, '\n');

    REPN(i, M)
    {
        int L, R;
        tie(L, R) = queries[i];

//LOG(L, ' '); LOG(R, ' '); LOG(psum[L], ' '); LOG(psum[R], '\n');
        cout << psum[R] - psum[L] << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);

    string S;
    int M;

    cin >> S >> M;

    REPN(i, M)
        cin >> queries[i].first >> queries[i].second;

    solve(S, M);

    return 0;
}
