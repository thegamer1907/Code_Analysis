#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;
vector <int> ar;
vector <int> ar1;
int s, n;

int get_sum(int k) {
    ar1.clear();
    for (int i = 0; i < n; ++i) {
        ar1.push_back(ar[i] + (i + 1) *k);
    }
    sort(ar1.begin(), ar1.end());
    int ans = 0;
    for (int i = 0; i < k; ++i) {
        ans += ar1[i];
    }
    return ans;
}

bool check(int k) {
    return get_sum(k) <= s;
}

signed main() {
    cin>>n>>s;
    for (int i = 0; i < n; ++i) {
        int a;
        cin>>a;
        ar.push_back(a);
    }
    int l = 0;
    int r = n + 1;
    while (r - l > 1) {
        int mid = (l + r) / 2;
        if (check(mid)) l = mid;
        else r = mid;
    }
    cout<<l<<" "<<get_sum(l);
}