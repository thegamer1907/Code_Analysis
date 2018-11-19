// HELP ME PLEASE

#pragma GCC optimize("O3")
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <set>

// #include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define f first
#define s second

const int INF = 1e9 + 7;
const ld PI = 3.141592653589793;

inline void bye() {
#ifdef GA
    cout << "\n:GA: Time: " << clock() * 1.0 / CLOCKS_PER_SEC << " seconds\n";
#endif
    exit(0);
}

// GA :)


int main(void) {
#ifdef GAG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cout << fixed << setprecision(16);
    srand(INF);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string password;
    cin >> password;

    int n;
    cin >> n;

    vector<string> can(n);

    for (int i = 0; i < n; i++) {
        cin >> can[i];
    }

    int canf = -1, cans = -1;

    for (int i = 0; i < n; i++) {
        if (can[i][1] == password[0]) {
            canf = i;
        }
        if (can[i][0] == password[1]) {
            cans = i;
        }
        if (can[i] == password) {
            cout << "YES\n";
            bye();
        }
    }

    if (-1 == canf || cans == -1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }

    bye();
    // cout << "\n:GA: Time: " << clock() * 1.0 / CLOCKS_PER_SEC << " seconds\n";
}
