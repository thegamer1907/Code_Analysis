#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for(int i = 0; i < n; ++i)
#define debug(...) fprintf(stderr, __VA_ARGS__); fflush(stderr)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ins insert
#define ers erase

typedef unsigned long long ull;
typedef long long ll;
typedef double db;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<db, db> pdd;

const int N = 1e5 + 7;
const ll seed = time(0);

int n, m, k;
int arr[N];
int ans;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    forn (i, n)
        cin >> arr[i];

    forn (i, n)
        arr[i] = arr[i] + (i - arr[i] % n + n) % n;

    ans = 0;
    for (int i = 1; i < n; ++i)
        if (arr[i] < arr[ans])
            ans = i;
    cout << ans + 1;

    return 0;
}
