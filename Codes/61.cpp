#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <cstdio>

using namespace std;
#define maxn 20000000000LL

int main() {
    ios::sync_with_stdio(0);
    long long int i, j, l, m, n, t, x, y, r;
    cin >> n;
    vector<long long int> a;
    long long int sum = 0;
    for (i = 0; i < n; i++) {
        cin >> j;
        a.push_back(j);
        sum += j;
    }
    if (sum % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }
    sum = sum / 3;
    vector<long long int> f, b;
    long long int cs = 0;
    for (i = 0; i < n; i++) {
        cs = cs + a[i];
        if (cs == sum)
            f.push_back(i);
    }
    cs = 0;
    if (f.empty()) {
        cout << 0 << endl;
        return 0;
    }
    long long int cnt = 0;
    for (i = n - 1; i >= 0; i--) {
        cs = cs + a[i];
        long long int ans = -1;
        if (cs == sum) {
            int st = 0, en = f.size() - 1;
            while (st <= en) {
                long long int mid = (st + en) / 2;
                if (f[mid] < i - 1) {
                    ans = mid;
                    st = mid + 1;
                } else {
                    en = mid - 1;
                }
            }
        }
//        cout<<i<<" "<<ans<<endl;
        cnt += ans + 1;
    }
    cout << cnt << endl;
}