#include <bits/stdc++.h>
using namespace std;
int a[101], mx, mn, n, m;
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    mx = a[n-1] + m;
    for(int i = 0; i < n && m; i++){
        if(a[i] == a[n-1]) continue;
        m = max(m - (a[n-1] - a[i]), 0);
    }
    if(m){
        mn = a[n-1] + m/n;
        mn += (m%n == 0) ? 0 : 1;
    }
    else
        mn = a[n-1];
    cout << mn << " " << mx;
    return 0;
}
