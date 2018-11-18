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

#define N

int n, h, m, s, a, b;
int t[3];

int get(int x) {
    if (t[0] <= x && x < t[1]) return 0;
    if (t[1] <= x && x < t[2]) return 1;
    return 2;
}


int main() {
    scanf("%d %d %d %d %d", &h, &m, &s, &a, &b);
    int sh = h;
    if (m > 0 || s > 0) sh ++;
    if (sh == 13) sh = 1;
    int sm = m;
    if (s > 0) sm ++;
    if (sm == 60) sm = 0;
    sm = (sm + 4) / 5;
    if (sm == 0) sm = 12;
    int ss = s;
    ss = (ss + 4) / 5;
    if (ss == 0) ss = 12;
    t[0] = ss, t[1] = sh, t[2] = sm;
    sort(t, t + 3);
    int x = get(a);
    int y = get(b);
    if (x == y) puts("YES");
    else puts("NO");
	return 0;
}
