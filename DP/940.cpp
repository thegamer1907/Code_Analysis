#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector <int> a(n);
    int ans = 0, start = -1,cnt = 0,c1 = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(!a[i] && start == -1) {
            start = i;
        }
        if(a[i]) {
            cnt++;
        }
    }
    if(start == -1) {
        cout << cnt-1 << "\n";
        return 0;
    }
    for(int i = 0; i < n; i++) {
        c1 += (a[i] ? -1 : 1);
        ans = max(ans,c1);
        if(c1 < 0) {
            c1 = 0;
        }
    }
    cout << ans+cnt << "\n";
}
