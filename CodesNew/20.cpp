#include<bits/stdc++.h>

#define int long long int
#define mp make_pair
using namespace std;

int32_t main() {
    int n,m;
    scanf("%lld", &n);
    scanf("%lld", &m);
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &v[i]);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 1; i < n; ++i) {
        ans = max(ans , (v[i] - v[i - 1]));
    }
    double ans1 = ans*1.0;
    ans1 = ans1/2;
    if(v[0] != 0){
        if(v[0] - 0 > ans1){
            ans1 = v[0] - 0;
        }
    }
    if(v[n-1] != m){
        if(m - v[n-1] > ans1){
            ans1 = m - v[n-1];
        }
    }
    printf("%.9lf",ans1);
    return 0;
}