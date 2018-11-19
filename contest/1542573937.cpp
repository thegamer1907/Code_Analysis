#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
bool a[16];
int main() {
    int n, k, i, j, t, x;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; ++i) {
        for(t = j = 0; j < k; ++j) {
            scanf("%d", &x);
            t = t<<1|x;
        }
        a[t] = 1;
    }
    for(i = 0; i < (1<<k); ++i)
        for(j = i; j < (1<<k); ++j)
            if(a[i]&&a[j]&& !(i&j)) {puts("YES");return 0;}
    puts("NO");
    return 0;
}