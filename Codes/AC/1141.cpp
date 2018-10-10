#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <climits>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <cstring>
#include <string>
#include <memory.h>
#include <list>
#include <deque>
#include <cstdlib>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define N 100005
#define INF 1000000007
#define int long long

using namespace std;

typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef pair <int, ii> iii;
typedef vector <iii> viii;
typedef long long LL;

struct Friend {
    int money;
    int fship;
};

bool cmp (Friend a, Friend b)
{
    if (a.money != b.money) return a.money < b.money;
    else return a.fship <= b.fship;
}

signed main(){
    //freopen("main.inp", "r", stdin);
    //freopen("main.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,d;
    cin >> n >> d;
    Friend a[n+1];
    for (int i = 1; i<=n; i++) cin >> a[i].money >> a[i].fship;
    sort(a+1, a+n+1, cmp);
    int dp[n+1];
    dp[0] = 0;
    //for (int i = 1; i<=n; i++) cout << a[i].money << " " << a[i].fship << "\n";
    for (int i = 1; i<=n; i++) dp[i] = dp[i-1] + a[i].fship;

    int ans = 0;
    for (int i = 1; i<=n; i++)
    {
        int l = i;
        int r = n;
        while (l <= r)
        {
            int m = (l + r)/2;
            if (a[m].money >= d + a[i].money) r = m - 1;
            else l = m + 1;
        }
        ans = max(ans, dp[r] - dp[i-1]);
    }
    cout << ans;
    return 0;
}
