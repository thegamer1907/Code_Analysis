#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <cstdio>
#include <sstream>
#include <set>

using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(0);
    int i, j, l, m, n, t, x, y, r, z, o;
    vector<int> a;
    vector<ll> s;
    ll sum = 0;
    cin >> n>> m;
    for (i = 0; i < n; i++) {
        cin >> j;
        a.push_back(j);
    }
    for (i = n - 1; i >= 0; i--) {
        sum += a[i];
        s.push_back(sum);
    }
    reverse(s.begin(), s.end());
    s.push_back(0);
    ll cpos = 0, curd = 0, sumr = sum;
    for (int rx = 0; rx < m; rx++) {
        ll val;
        cin >> val;
        if (val >= sumr) {
            cout << n << endl;
            cpos = 0;
            curd = 0;
            sumr = sum;
        } else if (a[cpos] - curd > val) {
            cout << n - cpos << endl;
            curd += val;
            sumr -= val;
        } else {
            int st = cpos + 1, en = n;
            ll oval = val;
            val -= a[cpos] - curd;
            int ans = 0;
            ll tot = s[cpos + 1];
            while (st <= en) {
                int mid = (st + en) / 2;
//                cout<<st<<" "<<en<<" "<<mid<<" "<<tot-s[mid]<<" "<<val<<"  "<<curd<<endl;
                if (tot - s[mid] < val) {
                    st = mid + 1;
                } else {
                    ans = mid;
                    en = mid - 1;
                }
            }
            tot = s[cpos + 1] - s[ans];
            ll lef = tot - val;
//            cout<<cpos<<"_____"<<ans<<endl;
            if (lef == 0) {
                cpos = ans;
                curd = 0;
                cout<<n-ans<<endl;
            } else {
                cpos = ans - 1;
                curd = a[cpos] - (tot - val);
                cout<<n-ans+1<<endl;
            }
            sumr -= oval;
//            cout<<"kaja  "<<sumr<<endl;
        }
    }
}