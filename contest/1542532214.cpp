#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mp make_pair
#define pc putchar
#define gc getchar
#define pb push_back
#define ppb pop_back
#define x first
#define y second
#define f0(i, a, b) for (int i = a; i < b; i ++)
#define f1(i, a, b) for (int i = a; i <= b; i ++)
#define f2(i, a, b) for (int i = a; i > b; i --)
#define f3(i, a, b) for (int i = a; i >= b; i --)
template <class T> void chkmax(T &a, T b) {if (a < b) a = b;}
template <class T> void chkmin(T &a, T b) {if (a > b) a = b;}

typedef pair <int, int> pii;
typedef pair <int, ll> pil;
typedef pair <ll, int> pli;
typedef pair <ll, ll> pll;
typedef vector <int> vi;

const int inf = 0x3f3f3f3f;
const ll linf = 2e18 + 100;
const double eps = 1e-7;

#define N 105

int n;
char s[N][3], t[3];
bool vis[30], wis[30];

int main() {
    scanf("%s", t);
    scanf("%d", &n);
    f1(i, 1, n) scanf("%s", s[i]);
    f1(i, 1, n) {
        if (strcmp(s[i], t) == 0) {
            puts("YES");
            return 0;
        }
    }
    f1(i, 1, n) vis[s[i][0] - 'a'] = 1, wis[s[i][1] - 'a'] = 1;
    if (wis[t[0] - 'a'] && vis[t[1] - 'a']) puts("YES");
    else puts("NO");

    return 0;
}