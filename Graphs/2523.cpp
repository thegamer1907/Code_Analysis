

#include<bits/stdc++.h>
using namespace std;

int a[10005], clr[10005];
int n, cnt;

int main() {
    cin >> n;
    for (int i=2; i<=n; i++) cin >> a[i];
    for (int i=1; i<=n; i++) cin >> clr[i];

    cnt = n;
    for (int i=2; i<=n; i++) {
        if (clr[i]==clr[a[i]]) cnt--;
    }
    cout << cnt;
    return 0;
}
