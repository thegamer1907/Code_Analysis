//By Don4ick
#include <bits/stdc++.h>
#include <stdio.h>

typedef long long ll;

#define pb push_back
#define all(x) x.begin(), x.end()
#define y1 yq1231
#define forn(i, n) for (int i = 1; i <= n; i++)

const double PI = acos(-1.0);
const int DIR = 4;
const int X[] = {1, 0,-1, 0};
const int Y[] = {0, 1, 0, -1};

const int N = 500;

using namespace std;

int n, a, b, deg, ans, cnt[N];

int solve(int l, int r, int level)
{
    if (l == r)
    {   
        return cnt[l];
    }
    int mid = (l + r) >> 1;
    if (solve(l, mid, level + 1) == 1 & solve(mid + 1,r, level + 1) == 1)
        ans = level;
    int sum = 0;
    for (int i = l; i <= r; i++)    
        sum += cnt[i];
    return sum;
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie();
    //cout.tie(); 

    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);


    //~read
    cin >> n >> a >> b;
    cnt[a] = 1;
    cnt[b] = 1;
    int x = n;
    while(x % 2 == 0)
        deg++, x /= 2;
    solve(1, n, 0);
    if (ans == 0)
        cout << "Final!" << endl;
    else
        cout << deg - ans << endl;     
    //cerr << 1.0 * clock() / CLOCKS_PER_SEC << endl;

    return 0;
}