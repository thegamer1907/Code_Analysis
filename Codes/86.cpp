#include <bits/stdc++.h>

using namespace std;

const int N = 5e5+55;
int a[N];
long long cnt[N];
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
#ifndef ONLINE_JUDGE
//    freopen("in.txt", "r", stdin);
#endif // ONLINE_JUDGE
    int n;
    cin >> n;
    long long sa = 0;
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
        sa += a[i];
    }
    if (sa % 3 != 0)
        return cout << "0\n", 0;
    sa /= 3;
    long long ss = 0;
    for(int i = n-1; i >= 0 ; --i){
        ss += a[i];
        if (ss == sa)
            cnt[i] = 1;
    }
    for(int i = n-2 ; i >= 0 ; --i)
        cnt[i] += cnt[i+1];
    
    long long ans = 0;
    ss = 0;
    for(int i = 0 ; i < n-2 ; ++i) {
        ss += a[i];
        if (ss == sa)
            ans += cnt[i+2];
    }
    cout << ans << "\n";
    return 0;
}
