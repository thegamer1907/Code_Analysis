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

string make_str(char x, char y)
{
    string s = "  ";
    s[0] = x;
    s[1] = y;
    re s;
}
int main() {
    #ifdef LOCAL_JOKE
        freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0);
    int n;
    string pas;
    char x, y, a[101], b[101];
    cin >> pas;
    cin >> n;
    rep(i, n)
    {
        cin >> x >> y;
        if (make_str(x, y) == pas)
        {
            cout << "YES";
            re 0;
        }
        a[i] = x;
        b[i] = y;
    }
    rep(i, n)
        rep(j, n)
            if (make_str(b[i], a[j]) == pas)
            {
                cout << "YES";
                re 0;
            }
    cout << "NO";
    re 0;
}
