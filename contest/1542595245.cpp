#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,sse3,sse4,popcnt,abm,mmx")

#include "bits/stdc++.h"

#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define f first
#define s second
#define uint unsigned int

using namespace std;


int main() {
#define FILE_INPUT 0
#define FILE "coins"
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
    string s;
    cin >> s;
    int n;
    cin >> n;
    bool f = false;
    int x = 0;
    int y = 0;
    bool g = false;
    for (int i = 0; i < n; ++i) {
        string c;
        cin >> c;
        if (c == s)  {
            cout << "YES";
            return 0;
        }
        if (c[0] == s[1]) {
            g = 1;
            x = i;
        }
        
        if (c[1] == s[0]) {
            f = 1;
            y = i;
        }
        if (f && g) {
            cout << "YES";
            return 0;
        }
        
    }
    
    cout << "NO";
    return 0;
}
