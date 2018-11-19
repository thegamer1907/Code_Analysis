#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll ans;
bool ok = 0;
char st[3],a[110][3];
int n;
int main() {
    scanf("%s",st);
    scanf("%d",&n);
    for (int i=0; i<n; ++i) {
        scanf("%s",a[i]);
        if (a[i][0]==st[0]&&a[i][1]==st[1]||a[i][0]==st[1]&&a[i][1]==st[0]) {
            ok=1;
        }
    }
    if (ok) {
        printf("YES\n");
        return 0;
    }
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j) {
            if (a[i][1]==st[0]&&a[j][0]==st[1]||a[i][0]==st[1]&&a[j][1]==st[0]) {
                ok=1;
                break;
            }
        }
    if (ok) printf("YES\n");
    else printf("NO\n");
    return 0;
}
