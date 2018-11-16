#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    int a[30004];
    for(int i = 1; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int st = 1;
    while(st < n) {
        st = st + a[st];
        if(st == t) {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
}
