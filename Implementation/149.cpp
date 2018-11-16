#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

#define pb push_back
#define fr first
#define sc second

const int inf = 1e9 + 88;
const ll infll = 1e18 + 88;
const ld eps = 1e-9;
const ll mod = 1e9 + 7;

void readarr(int &x, int b[])
{
    cin >> x;
    for (int i = 0; i < x; i++)
        cin >> b[i];
}

void readarrll(int &x, ll b[])
{
    cin >> x;
    for (int i = 0; i < x; i++)
        cin >> b[i];
}

void readint(int &x)
{
    cin >> x;
}

void readll(ll &x)
{
    cin >> x;
}

const int maxn = 1e5 + 88;

int n, a, b;


//1 2 3 4 5 6 7 8
//1 2 3 4
//1 2

void solve()
{
    cin >> n >> a >> b;
    if (a > b)
        swap(a, b);
    int i = 0;
    while (n > 1)
    {
        if (a == b)
        {
            cout << i;
            return;
        }
        a = a / 2 + a % 2;
        b = b / 2 + b % 2;
        n /= 2;
        i++;
    }
    cout << "Final!";
}

/**

**/

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
