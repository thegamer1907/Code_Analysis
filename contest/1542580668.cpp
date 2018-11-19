#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;

#define mp make_pair
#define pb(x) push_back(x)
#define rep(i, n) for (int i = 0; i < n; i++)
#define repp(i, s, e) for (int i = s; i <= e; i++)
#define all(x) x.begin(), x.end()
#define geti1(x) scanf("%d", &(x))
#define geti2(x, y) scanf("%d%d", &(x), &(y))
#define geti3(x, y, z) scanf("%d%d%d", &(x), &(y), &(z))
#define geti4(x, y, z, w) scanf("%d%d%d%d", &(x), &(y), &(z), &(w))
#define GET_MACRO(_1, _2, _3, _4, NAME, ...) NAME
// clang-format off
#define geti(...) GET_MACRO(__VA_ARGS__, geti4, geti3, geti2, geti1) (__VA_ARGS__)
// clang-format on

#define MAX2(x, y) (((x) > (y)) ? (x) : (y))
#define MIN2(x, y) (((x) < (y)) ? (x) : (y))
#define MAX3(x, y, z) ((x) > (y) ? ((x) > (z) ? (x) : (z)) : ((y) > (z) ? (y) : (z)))
#define MIN3(x, y, z) ((x) < (y) ? ((x) < (z) ? (x) : (z)) : ((y) < (z) ? (y) : (z)))
#define MID3(val1, val2, val3) MAX2(MIN2(MAX2(val1, val2), val3), MIN2(val1, val2))

#define INF 2123456789
#define IINF 9123456789123456789
#define M_PI 3.14159265358979323846
//--------------------------------------------------//
int n, k;
int know[100010][10];
int main() {
    cin >> n >> k;
    rep(i, n) rep(j, k) geti(know[i][j]);

    if (k == 1) {
        rep(i, n) {
            if (know[i][0] == 0) {
                puts("YES");
                return 0;
            }
        }
        puts("NO");
        return 0;
    } else if (k == 2) {
        bool ch1 = false, ch2 = false;
        rep(i, n) {
            if (know[i][0] + know[i][1] == 0) {
                puts("YES");
                return 0;
            }
            if (know[i][0] == 1 && know[i][1] == 0) ch1 = true;
            if (know[i][0] == 0 && know[i][1] == 1) ch2 = true;
        }
        if (ch1 && ch2) {
            puts("YES");
            return 0;
        }
        puts("NO");
        return 0;
    } else if (k == 3) {
        bool ch1 = false, ch2 = false, ch3 = false;
        rep(i, n) {
            if (know[i][0] + know[i][1] + know[i][2] == 0) {
                puts("YES");
                return 0;
            }
            if (know[i][0] == 1 && know[i][1] == 0 && know[i][2] == 0) ch1 = true;
            if (know[i][0] == 0 && know[i][1] == 1 && know[i][2] == 0) ch2 = true;
            if (know[i][0] == 0 && know[i][1] == 0 && know[i][2] == 1) ch3 = true;
        }
        if (ch1) {
            rep(i, n) {
                if (know[i][0] == 0) {
                    puts("YES");
                    return 0;
                }
            }
            puts("NO");
            return 0;
        }
        if (ch2) {
            rep(i, n) {
                if (know[i][1] == 0) {
                    puts("YES");
                    return 0;
                }
            }
            puts("NO");
            return 0;
        }
        if (ch3) {
            rep(i, n) {
                if (know[i][2] == 0) {
                    puts("YES");
                    return 0;
                }
            }
            puts("NO");
            return 0;
        }
        puts("NO");
        return 0;
    } else {
        bool ch[4] = {0};
        bool ch2[6] = {0};
        rep(i, n) {
            if (know[i][0] + know[i][1] + know[i][2] + know[i][3] == 0) {
                puts("YES");
                return 0;
            }
            if (know[i][0] == 1 && know[i][1] == 0 && know[i][2] == 0 && know[i][3] == 0) ch[0] = true;
            if (know[i][0] == 0 && know[i][1] == 1 && know[i][2] == 0 && know[i][3] == 0) ch[1] = true;
            if (know[i][0] == 0 && know[i][1] == 0 && know[i][2] == 1 && know[i][3] == 0) ch[2] = true;
            if (know[i][0] == 0 && know[i][1] == 0 && know[i][2] == 0 && know[i][3] == 1) ch[3] = true;

            if (know[i][0] == 0 && know[i][1] == 0 && know[i][2] == 1 && know[i][3] == 1) ch2[0] = true;
            if (know[i][0] == 0 && know[i][1] == 1 && know[i][2] == 0 && know[i][3] == 1) ch2[1] = true;
            if (know[i][0] == 1 && know[i][1] == 0 && know[i][2] == 0 && know[i][3] == 1) ch2[2] = true;
            if (know[i][0] == 0 && know[i][1] == 1 && know[i][2] == 1 && know[i][3] == 0) ch2[3] = true;
            if (know[i][0] == 1 && know[i][1] == 0 && know[i][2] == 1 && know[i][3] == 0) ch2[4] = true;
            if (know[i][0] == 1 && know[i][1] == 1 && know[i][2] == 0 && know[i][3] == 0) ch2[5] = true;
        }
        rep(i, 4) {
            if (ch[i]) {
                rep(j, n) {
                    if (know[j][i] == 0) {
                        puts("YES");
                        return 0;
                    }
                }
                puts("NO");
                return 0;
            }
        }
        if (ch2[0] && ch2[5]) {
            puts("YES");
            return 0;
        }
        if (ch2[1] && ch2[4]) {
            puts("YES");
            return 0;
        }
        if (ch2[2] && ch2[3]) {
            puts("YES");
            return 0;
        }
        puts("NO");
        return 0;
    }
}