#include <cstdio>
#include <cstdlib>
int getint(){
    char ch = getchar();
    int res = 0;
    while (ch < '0' || ch > '9') ch = getchar();
    while (ch >= '0' && ch <= '9') res = res * 10 + ch - 48, ch = getchar();
    return res;
}
int a[505000];
int cnt[100500];
bool has[500500];
int n, i, w, j, c;
bool can(int x){
    int i, j;
    j = x + 1;
    for (i = 1; i <= x; i++){
        while (a[i] + a[i] > a[j] && j <= w) j++;
        if (j > w) return false;
        j++;
    }
    return true;
}

int main(){
    int l, r, mid;
    n = getint();
    for (i = 1; i <= n; i++) cnt[getint()]++;
    w = 0;
    for (i = 1; i <= 100000; i++)
        while (cnt[i]--) a[++w] = i;
    l = 0; r = w / 2;
    while (r - l > 1){
        mid = (l + r) >> 1;
        if (can(mid)) l = mid; else r = mid;
    }
    if (can(r)) c = r; else c = l;
    printf("%d\n", w - c);
    return 0;
}
