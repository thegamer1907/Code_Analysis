#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,sse4,abm,popcnt,tune=native")

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <set>
#include <map>
#include <unordered_map>

using namespace std;

//#define int long long
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (int)v.size()
#define pb push_back

typedef long long ll;
typedef long double ld;

template<typename T1, typename T2>
bool mini(T1 &a, const T2 &b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<typename T1, typename T2>
bool maxi(T1 &a, const T2 &b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

void run();

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    run();
}

void run() {
    
    int n, a, b;
    cin >> n >> a >> b;
    a--;
    b--;
    
    int round = 1;
    for (;;round++) {
        if (a / (1 << round) == b / (1 << round))
            break;
    }
    
    if ((1 << round) == n)
        cout << "Final!";
    else
        cout << round;
    
}
