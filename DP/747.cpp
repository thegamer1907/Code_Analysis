#include<bits/stdc++.h>
using namespace std;

int n, a[105];
int re, cnt;
vector<int> vt;

void solve(int st) {
    int sz = vt.size();
    for (int i=st; i<sz; i+=2) {
        int x = vt[i];
        re = max(re, x);
        for (int j=i+2; j<sz; j+=2) {
            x = x - vt[j-1] + vt[j];
            re = max(re, x);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> a[0];
    cnt = 1;
    for (int i=1; i<n; i++) {
        cin >> a[i];
        if (a[i] == a[i-1]) {
            cnt++;
        } else {
            vt.push_back(cnt);
            cnt = 1;
        }
    }

    vt.push_back(cnt);
    solve(a[0]);
    cnt = 0;
    for (int i=0; i<n; i++) {
        if (a[i]) {
            cnt++;
        }
    }

    if (cnt == n) {
        cout << n-1;
    } else {
        cout << re + cnt;
    }
    return 0;
}
