#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 1e5 + 10;
const int MOD = 1e9 + 7;
int main() {
    int n;
    char a[5],b[5];
    scanf("%s%d",a,&n);
    int f1=0,f2=0;
    for(int i=1;i<=n;i++) {
        scanf("%s",b);
        if(b[0]==a[1]) f2=1;
        if(b[1]==a[0]) f1=1;
        if(a[0]==b[0]&&a[1]==b[1]) f1=1,f2=1;
    }
    if(f1&&f2) puts("YES");
    else puts("NO");
    return 0;
}