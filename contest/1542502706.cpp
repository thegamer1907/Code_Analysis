#include <bits/stdc++.h>
#define eps 1e-6
using namespace std;
const int maxn = 2e5 + 5;
int h, m, s, t1, t2;
int a[100];
int main() {
    cin >> h >> m >> s >> t1 >> t2;
    h *= 5;
    t1 *= 5;
    t2 *= 5;
    h %= 60;
    t1 %= 60;
    t2 %= 60;
    a[h]++;
    a[m]++;
    a[s]++;
    if(t1 > t2) swap(t1, t2);
    int ans = 0;
    for(int i = t1; i < t2  ; i++) {
        ans += a[i];
    }
    if(ans == 0 || ans == 3) printf("YES\n");
    else printf("NO\n");
    return 0;
}