#include <bits/stdc++.h>
using namespace std;
const int maxn = 3e4 + 10;
int n, t, a[maxn];
int main() {
    scanf("%d%d", &n, &t);
    for (int i = 1 ; i < n ; i++) scanf("%d", &a[i]);
    int first=1,temp=0;
    while(first!=t) {
       first = a[first]+first;
       temp++;
       if (temp>n) break;
    }
    if (first==t) printf("YES\n");
    else printf("NO\n");
    return 0;
}
