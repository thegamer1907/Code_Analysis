#include <cstdio>
bool book[17][17], vis[17];
#define index(x) (((x)+12)%12)
int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    printf("init! init! init!\n");
#endif
    int h, m, s, t1, t2;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    t1 %= 12, t2 %= 12, h %= 12;
    if(s%5 == 0) vis[index(s/5)] = true;
    else book[index(s/5)][index(s/5+1)] = true;
    if(m%5 == 0 && s == 0) vis[index(m/5)] = true;
    else book[index(m/5)][index(m/5+1)] = true;
    if(m == 0 && s == 0) vis[h] = true;
    else book[h][index(h+1)] = true;
    int tmp = t1;
    while(tmp != t2) {
        if(book[tmp][index(tmp+1)] || vis[index(tmp+1)]) break;
        tmp = index(++tmp);
    }
    if(tmp == t2) return 0*printf("YES\n");
    tmp = t1;
    while(tmp != t2) {
        if(book[index(tmp+11)][tmp] || vis[index(tmp-1)]) break;
        tmp = index(--tmp);
    }
    if(tmp == t2) return 0*printf("YES\n");
    return 0*printf("NO\n");
}