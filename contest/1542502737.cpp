#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5 + 10;
const int INF = 0x7fffffff;
typedef long long LL;
double h, m, s, t1, t2, a[101];
int main() {
    cin >> h >> m >> s >> t1 >> t2;
    a[0] = s / 5;
    a[1] = ((s / 60) + m) / 5;
    a[2] = h + ((s / 60) + m) / 60;
    if (a[2] > 12) a[2] -= 12;
    sort(a, a + 3);
    //printf("a0=%.4f a1=%.4f a2=%.4f\n", a[0], a[1], a[2]);
    if (t1 >= a[0] && t1 <= a[1] &t2 >= a[0] && t2 <= a[1] ) printf("YES\n");
    else if (t1 >= a[1] && t1 <= a[2] && t2 >= a[1] && t2 <= a[2] )printf("YES\n");
    else if (t1 >= a[2] && t1 <= a[0] + 12 && t2 >= a[2] && t2 <= a[0] + 12 )printf("YES\n");
    else if (t1 >= a[2] && t1 <= a[0] + 12 && t2+12 >= a[2] && t2+12 <= a[0] + 12 )printf("YES\n");
    else if (t1+12 >= a[2] && t1+12 <= a[0] + 12 && t2 >= a[2] && t2 <= a[0] + 12 )printf("YES\n");
    else if (t1+12 >= a[2] && t1+12 <= a[0] + 12 && t2+12 >= a[2] && t2+12 <= a[0] + 12 )printf("YES\n");
    else printf("NO\n");
    return 0;
}
