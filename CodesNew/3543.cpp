#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, i, k, l, m, ans1, ans2;
    cin >> n >> m;
    vector < long long > a(n);
    k = 0;
    l = LONG_MAX;
    for(i = 0; i < n; i++) {cin >> a[i];}
    sort(a.begin(), a.end());
    ans2 = a[n-1]+m;
    for(i = 0; i < n-1; i++) {
        m-=a[n-1]-a[i];
        a[i] = a[n-1];
        if (m <= 0) {cout << a[n-1] << " " << ans2; return 0;}
    }
    k = 1;
    if(m%n == 0) {k = 0;}
    cout << a[n-1] + m/n + k<< " " << ans2;



    return 0;
}
