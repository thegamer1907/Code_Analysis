#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    long long n,k;
    int m;
    cin >> n >> m >> k;
    deque <long long> a(m);
    for (int i=0;i<m;++i) {
        cin >> a[i];
    }
    long long d=0;
    long long ind=1;
    long long cnt=0;
    bool x=0;
    long long ans=0;
    while (!a.empty()) {
        if (a.front()-d <= k*ind) {
            cnt++;
            x=1;
            a.pop_front();
        }
        else {
            d+=cnt;
            if (a.front()-d > k*ind) {
                if ((a.front()-d)%k == 0) {
                    ind=(a.front()-d)/k;
                }
                else
                    ind=(a.front()-d)/k+1;
            }
            cnt=0;
            if (x)
                ans++;
            x=0;
        }
    }
    cout << ans+1;
}