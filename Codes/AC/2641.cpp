#include <bits/stdc++.h>
#define for0(i, n) for(int i = 0; i < n; i++)
#define for1(i, n) for(int i = 1; i <= n; i++)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define V vector<int>
#define VP vector<pair<int, int> >
#define clr(A, x) memset(A, x, sizeof(A))
#define cpy(A, B) memcpy(A, B, sizeof(B))
#define g(s) getline(cin, s) ///ai grija la fin/cin ///
#define FASTIO ios_base::sync_with_stdio(0)
const long long INFLL = (1LL<<62);
const int INFINT = 2000000000;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
//ifstream fin("A-large-practice.in");
//ofstream fout("A-large-practice.out");

const int NMAX = 1e7 + 5;
const int MOD = 1e9 + 7;

int n;
int frecv[NMAX], f[NMAX], dp[NMAX];
bool ciur[NMAX];

void fct()
{
    for(int i = 2; i < NMAX; i += 2)
        f[2] += frecv[i];
    for(int i = 3; i < NMAX; i += 2)
        if(!ciur[i])
        {
            f[i] += frecv[i];
            for(int j = i + i; j < NMAX; j += i)
                f[i] += frecv[j], ciur[j] = 1;
        }
}

int main()
{
    FASTIO;
    cin >> n;
    for1(i, n)
    {
        int a;
        cin >> a;
        frecv[a]++;
    }
    fct();
    for(int i = 1; i < NMAX; i++)
        dp[i] = dp[i - 1] + f[i];
    int q;
    cin >> q;
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        cout << dp[min(10000000, r)] - dp[min(10000000, l - 1)] << '\n';
    }

    return 0;
}
