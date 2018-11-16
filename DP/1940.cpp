#include <iostream>
#include <queue>
#include <set>
#include <cmath>
#include <iomanip>
#include <map>
#include <algorithm>
#include <fstream>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ull unsigned long long
#define ll long long
#define hash hosh
#define y1 yy1
#define y2 yy2
#define y0 yy0
#define pii pair <int, int>
#define ppi pair <pair <int, int>, int>
#define pll pair <ll, ll>
using namespace std;
const int mod = 1e9 + 7;
const int mod2 = 1e9 + 9;
const int maxN = 5e5 + 100;
const int INF = 1e9 + 7;
const int maxedge = 1e6 + 100;
const ll LL_INF = 1e18 + 11;
using namespace std;
ll n,  a[maxN], q, x, suf[maxN];
bool was[maxN];
void file()
{
     freopen("pluses.in", "r", stdin);
     freopen("pluses.out", "w", stdout);
}
void boost()    
{
     ios_base :: sync_with_stdio(false);
     cin.tie(0);    
     cout.tie(0);
}
int main()
{
    boost();
    cin >> n >> q;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = n; i >= 1; i--)
    {
        if(!was[a[i]])
        {
            was[a[i]] = true;
            suf[i] = suf[i + 1] + 1;
        }
        else
        {
            suf[i] = suf[i + 1];
        }
    }
    for(int i = 1; i <= q; i++)
    {
        cin >> x;
        cout << suf[x] << endl;
    }
    
    
} 