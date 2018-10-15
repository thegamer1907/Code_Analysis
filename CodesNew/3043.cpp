#include <bits/stdc++.h>
#define FIN freopen("in.txt", "r", stdin)
#define FOUT freopen("out.txt", "w", stdout)

#define FUCK puts("fuck");

using namespace std;

const int MAXN = 3e6+5,
MAXM = 5e5+5,
MAXK = 26,
INF = 0x3f3f3f3f,
MOD = 1e9+7;

typedef long long LL;
typedef double ld;

struct ios {
    char buf[25], *p;
    inline char read() {
        static const int IN_LEN = 1<<18|1;
        static char buf[IN_LEN], *s, *t;
        return (s == t) && (t = (s = buf) + fread(buf, 1, IN_LEN, stdin)), s==t? -1:*s++;
    }
    template<typename _Tp> inline ios & operator >> (_Tp &x) {
        static char c11, boo;
        for (c11=read(), boo=0; !isdigit(c11); c11=read()) {
            if (c11 == -1) return *this;
            boo |= c11 == '-';
        }
        for (x=0; isdigit(c11); c11=read())
            x = x*10 + (c11^'0');
        boo && (x = -x);
        return *this;
    }
} io;

LL dp[MAXN];

int n, k, m;

char s[MAXN];

int main() {

    m = 1e6+1e5;

    scanf("%d", &k); getchar();
    gets(s);
    int len = strlen(s);
    LL ans = 0;
    for (int i=0; i<len; ++i) {
        if (s[i] == '1') {
            --m;
            ++dp[m+1];
        } else ++dp[m];
        ans += dp[m+k];
    }
    cout << ans << endl;
    return 0;
}
