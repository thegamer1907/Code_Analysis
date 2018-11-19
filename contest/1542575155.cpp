#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include <list>
#include <iomanip>
#include <bitset>
#include <functional>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cctype>
#define edl putchar('\n')
#define ll long long
#define clr(a,b) memset(a,b,sizeof a)
#define rep(i,m,n) for(int i=m ; i<=n ; i++)
#define fep(i,m,n) for(int i=m ; i<n ; i++)
inline void closesync() { std::ios::sync_with_stdio(false), std::cin.tie(NULL); }
inline int read_() {int x=0, f=1;int ch=getchar();while(ch<'0'||ch>'9') {if(ch=='-')f=-1;
        ch=getchar();}while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}return x*f; }
namespace FastIO {
    const int SIZE = 1 << 16;char buf[SIZE], str[60];int bi = SIZE, bn = SIZE;
    int read(char *s) {
        while (bn) {for (; bi < bn && buf[bi] <= ' '; bi++);if (bi < bn) break;
            bn = int(fread(buf, 1, SIZE, stdin));bi = 0;}int sn = 0;while (bn) {
            for (; bi < bn && buf[bi] > ' '; bi++) s[sn++] = buf[bi];if (bi < bn) break;
            bn = int(fread(buf, 1, SIZE, stdin));bi = 0;}s[sn] = 0;return sn;}
    template <typename T>
    bool read(T &x) {int n = read(str), bf;if (!n) return false;
        int i = 0; if (str[i] == '-') bf = -1, i++; else bf = 1;
        for (x = 0; i < n; i++) x = x * 10 + str[i] - '0';if (bf < 0) x = -x;return true;}
    int freadin() {int n = read(str), bf, x;if (!n) return 0;
        int i = 0; if (str[i] == '-') bf = -1, i++; else bf = 1;
        for (x = 0; i < n; i++) x = x * 10 + str[i] - '0';if (bf < 0) x = -x;return x;}};
#define readin read_()
#define fin FastIO::freadin()
#define read(x) FastIO::read(x)
#define read2(x,y) read(x),read(y)
#define read3(x,y,z) read(x),read(y),read(z)

using namespace std;

void init() {

}

bool vis[60], book[60][60];

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    printf("init! init! init!\n");
#endif
    init();
    int h, m, s, t1, t2;
    read3(h, m, s), read2(t1, t2);
    t1 %= 12, t2 %= 12;
    h %= 12;
    if(s%5 == 0) vis[s/5] = true;
    else book[(s/5)%12][(s/5+1)%12] = true;
    if(m%5 == 0 && s == 0) vis[(m/5)%12] = true;
    else book[(m/5)%12][(m/5+1)%12] = true;
    if(m == 0 && s == 0) vis[h] = true;
    else book[h][(h+1)%12] = true;
    int tmp = t1;
    while(tmp != t2) {
        if(book[tmp][(tmp+1)%12] || vis[(tmp+1)%12]) break;
        tmp++, tmp%=12;
    }
    if(tmp == t2) return 0*printf("YES\n");
    tmp = t1;
    while(tmp != t2) {
        if(book[(tmp+11)%12][tmp] || vis[tmp-1]) break;
        tmp--, tmp = (tmp+12) % 12;
    }
    if(tmp == t2) return 0*printf("YES\n");
    printf("NO\n");
    return 0;
}