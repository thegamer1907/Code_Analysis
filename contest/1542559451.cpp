#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, n) for (int i = (n) - 1; i >= 0; i--)
#define re return
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define sz(x) ((int) (x).size())
#define sqr(x) ((x) * (x))
#define sqrt(x) sqrt(abs(x))
#define next next666
#define prev prev666
#define free free666
#define y1   y6666
#define toint(x) ((int)(x) - 48)
#define b_pc(x) __builtin_popcount(x)
#define b_pcll(x) __builtin_popcount(x)
//0 - 48;   A - 65; Z - 90;   a - 97; z - 122;
const double pi = 3.141592653589793238;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

int fun(int x)
{
    if (x == 13)
        re 1;
    if (x == 0)
        re 12;
    re x;
}

int main() {
    #ifdef LOCAL_JOKE
        freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0);
    int h, m, s, t1, t2;
    bool b1 = 1, b2 = 1;
    cin >> h >> m >> s >> t1 >> t2;
    int m1 = fun(m / 5);
    int s1 = fun(s / 5);
    int start = t1;
    for(;;)
    {
        if (start == t2)
        {
            cout << "YES";
            re 0;
        }
        if (start == h || start == m1 || start == s1)
            break;
        start = fun(start + 1);
    }
    h = fun(h + 1);
    s1 = fun(s1 + 1);
    m1 = fun(m1 + 1);
    start = t1;
    for(;;)
    {
        if (start == t2)
        {
            cout << "YES";
            re 0;
        }
        if (start == h || start == m1 || start == s1)
            break;
        start = fun(start - 1);
    }
    cout << "NO";
    re 0;
}
