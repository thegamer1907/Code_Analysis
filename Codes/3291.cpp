#pragma comment(linker, "/STACK:102400000,102400000")
#ifndef ONLINE_JUDGE
#include "stdafx.h"
#else
#include<bits/stdc++.h>
#endif
using namespace std;
typedef long long lint;
typedef vector<int> VI;
typedef pair<int, int> PII;
typedef queue<int> QI;
typedef map<int, int> MII;

void makedata() {
    freopen("input.txt", "w", stdout);
    fclose(stdout);
}

int a[250000];

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    //makedata();
    std::ios::sync_with_stdio(0), cin.tie(0);
    int n, m = 0x7FFFFFFF;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m = min(m, a[i]);
    }
    for (int i = 0; i < n; i++) a[i] -= m;
    int p = m % n;
    for (int i = 0; i < n; i++) {
        if (a[(p + i) % n] <= i) {
            cout << (p + i) % n + 1 << endl;
			return 0;
        }
    }
    return 0;
}