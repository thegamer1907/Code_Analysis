// #include<bits/stdc++.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <ctype.h>

#define sp putchar(' ')
#define ln putchar('\n')

typedef long long ll;

template<typename T>inline bool chkmin(T &a, T b){return b < a ? a = b, true : false;}
template<typename T>inline bool chkmax(T &a, T b){return b > a ? a = b, true : false;}

template<class T> inline T read(T &x)
{
    int sign = 1;
    char c = getchar();
    for(; !isdigit(c); c = getchar())
        if(c == '-')
            sign = -1;
    for(x = 0; isdigit(c); c = getchar())
        x = x * 10 + c - '0';
    return x *= sign;
}
template<class T> inline void write(T x)
{
    if(x == 0) {putchar('0'); return;}
    if(x < 0) {putchar('-'); x = -x;}
    static char s[20];
    int top = 0;
    for(; x; x /= 10)
        s[++ top] = x % 10 + '0';
    while(top)
        putchar(s[top --]);
}

const int maxN = 1e4 + 100;

int a[maxN], c[maxN], ans, n;

struct Edge {
    int v, next;
}edge[maxN];
int head[maxN];

inline void addedge(int u, int v)
{
    static int totedge = 0;
    edge[++ totedge] = (Edge){v, head[u]}, head[u] = totedge;
}

void DFS(int u, int col)
{
    a[u] = col;
    for(int e = head[u]; e; e = edge[e].next) {
        int v = edge[e].v;
        DFS(v, col);
    }
}

void dfs(int u)
{
    if(a[u] != c[u]) {
        ++ ans;
        DFS(u, c[u]);
    }
    for(int e = head[u]; e; e = edge[e].next) {
        int v = edge[e].v;
        dfs(v);
    }
}

int main()
{
    if(fopen("b.in", "r")) {
        freopen("b.in", "r", stdin);
        freopen("b.out", "w", stdout);
    }

    read(n);
    for(int i = 2; i <= n; ++ i) {
        int x;
        read(x);
        addedge(x, i);
    }
    for(int i = 1; i <= n; ++ i) read(c[i]);

    dfs(1);
    write(ans), ln;

    return 0;
}
