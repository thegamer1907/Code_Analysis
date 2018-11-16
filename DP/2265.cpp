#include <bits/stdc++.h>
#define frin(i, n) for (int i = 0; i < n; i++)
#define frd(i, n) for (int i = n; i > 0; i--)
#define frab(i, a, b) for(int i = a; i < b; i++)
#define frit(it, s) for(auto it = s.begin(); it != s.end(); it++)
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()


typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef unsigned int ui;

const ll LINF = 1e18;
const int INF = 1e9;
const int M = 1e9 + 7;
const double EPS = 1.0e-9;
const double PI = acos(-1.0);


using namespace std;

int a[100100];
bool used[100100];
int dp[100100];

int main()
{
    std::ios_base::sync_with_stdio(0);
   // freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    frin(i, n)
        cin >> a[i];
    frd(i, n)
    {
        dp[i - 1] = dp[i] + int(!used[a[i - 1]]);
        used[a[i - 1]] = 1;
    }
    frin(i, m)
    {
        int l;
        cin >> l;
        cout << dp[l - 1] << "\n";
    }
    return 0;
}
