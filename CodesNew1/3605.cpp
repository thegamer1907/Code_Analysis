//All the C++ libraries.
//#include <bits/stdc++.h>

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>
#include <string>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
#include <locale>
using namespace std;

typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pll;

#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)

#define MP make_pair
#define PB push_back
#define len(s)   (int)s.length()
#define sz(v)    (int)v.size()
#define all(a)   a.begin(),a.end()
#define clr(x, val)	memset((x), (val), sizeof(x))
#define endl '\n'
const double pi  = 3.141592653589793238463;
/*****************************************************************************************/


int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n, m;   cin >> n >> m;
    int a[n];
    loop(n) cin >> a[i];

    int mx = 0;
    loop(n) mx = max(mx, a[i]);
    int ans2 = mx+m;

    loop(n) m -= (mx-a[i]);
    m = max(m, 0);
    int ans1 = mx + ceil(m/(double)n);

    cout << ans1 << " " << ans2 << endl;

    return 0;
}
