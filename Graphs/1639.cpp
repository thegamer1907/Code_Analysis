#include <bits/stdc++.h>
using namespace std;

int a[30009];
bool chk[30009];

int main() {
    int n,t; scanf("%d%d",&n,&t);
    for(int i=1; i<n; i++) {
        scanf("%d",&a[i]);
    }
    chk[1] = 1;
    for(int i=1; i<=t; i++) {
        if(chk[i]) chk[i + a[i]] = 1;
    }
    if(chk[t]) puts("YES");
    else puts("NO");
    return 0;
}
