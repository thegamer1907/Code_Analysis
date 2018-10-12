#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstdlib>
#include <vector>
#include <queue>
#include <set>
#include <map>

#define SWS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define ft first
#define sd second
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
#define files read; write

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector < int > vi;
typedef pair < int, int > pairt;

const int Z = (int)3e3 + 111;
const int N = (int)1e7 + 111;
const int INF = (int)1e9 + 111;
const int MOD = (int)1e9 + 7;

int pref[N], cur[N], cnt[N];
vi v(N), a(N);

int f(int x)
{
    int c = 0;
    for (int i = x; i < N; i += x)
        c += cnt[i];
    return c;
}

int main()
{
//	files;
	SWS;
	int n;
	cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> cur[i];
        cnt[cur[i]]++;
    }
	for (int i = 2; i < N; i++)
        a[i] = i;
	for (int i = 2; i < N / i; i++)
        if (a[i])
            for (int j = i * i; j < N; j += i)
                a[j] = 0;
    for (int i = 2; i < N; i++)
        if (a[i]) v[i] = f(i);
    for (int i = 2; i < N; i++)
        pref[i] = pref[i - 1] + v[i];
//   for (int i = 2; i <= 15; i++)
//        cout << a[i] << ' ' << cnt[i] << ' ' << v[i] << endl;
    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        cout << pref[min(r, (int)1e7)] - pref[min(l - 1, (int)1e7)] << endl;
    }
	return 0;
}