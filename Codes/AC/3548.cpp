#include<bits/stdc++.h> 

using namespace std;

#define int     long long 

bool check(int );

int n;
int lo, hi;
int tar;

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cerr << "HELLO WORLD :)\n";
    cin >> n;
    lo = 0, hi = n;
    tar = (n + 1) / 2;
    while (lo + 1 < hi) {
        int mid = (lo + hi) >> 1;
        if (check(mid))
            hi = mid;
        else 
            lo = mid;
    }
    return cout << hi << '\n', false;
}

bool check(int mid) {
    int x = n;
    int cnta = 0;
    while (x) {
        cnta += min(mid, x);
        x -= min(mid, x);
        x -= x / 10;
    }
    return cnta >= tar;
}