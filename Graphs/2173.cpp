//
//  Created by Ruslan Jankurazov.
//  Copyright © 2018 Ruslan Jankurazov. All rights reserved.
//

#pragma GCC optimize("Ofast")

#include "bits/stdc++.h"

#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define f first
#define s second
#define uint unsigned int

using namespace std;

int rec(int n, int m) {
    if (n == m)
        return 0;
    if (m < n)
        return n - m;
    if (m%2 == 0) {
        return 1 + rec(n, m/2);
    } else {
        return 1 + rec(n, m + 1);
    }
}


int main() {
#define FILE_INPUT 0
#define FILE ""
#ifndef DEBUG
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#if FILE_INPUT == 1
#warning "FREOPEN is on"
    freopen(FILE".in", "r", stdin);
    freopen(FILE".out", "w", stdout);
#endif
#endif
    int n, m;
    cin >> n >> m;
    cout << rec(n, m);
    return 0;
}
