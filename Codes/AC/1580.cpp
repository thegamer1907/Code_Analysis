#include <algorithm>
#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>
#include <queue>
#include <cstring>
#include <map>
#include <stack>
#include <set>
#include <memory.h>
     
using namespace std;
     
typedef long long ll;
typedef long double ld;
     
#define y1 trololo
     
const ld pi = acos(-1.0);
const int intINF = (int)1e9;
     
template <typename T>
T gcd(T a, T b) {
    while (a > 0 && b > 0) {
        if (a > b) a %= b; else b %= a;
    }
    return (a + b);
}
     
template <typename T>
T lcm(T a, T b) {
    return a / gcd(a, b) * b;
}
     
template <typename T>
bool prime(T n) {
    if (n <= 1) {
        return false;
    }
    T i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
        }
        ++i;
    }
    return true;
}
     
ll get_power(ll a, ll b, ll mod) {
    if (b == 0) {
        return 1 % mod;
    }
    ll ans = get_power(a, b / 2, mod);
    ans = (ans * ans) % mod;
    if (b % 2) {
        ans *= a;
    }
    ans %= mod;
    return ans;
}
     
template<typename T, typename U> 
U power(T a, T b, U modulo) {
    ll A = (ll)a, B = (ll)b, C = (ll)modulo;
    return (U)get_power(A, B, C);
}  

int n, S;
vector <int> a, b;

pair<bool, ll> get(int mid) {
    b.clear();
    for (int i = 0; i < n; ++i) {
        ll val = a[i];
        val += (ll)(i + 1) * mid;
        if (val <= S) b.push_back(val);
    }
    sort(b.begin(), b.end());
    int S2 = 0;
    if (b.size() < mid) {
        return make_pair(false, 0);
    }
    for (int i = 0; i < mid; ++i) {
        S2 += b[i];
        if (S2 > S) {
            return make_pair(false, 0);
        }
    }
    return make_pair(true, S2);
}

void solveTask() {
    cin >> n >> S;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        a.push_back(val);
    }
    int l = 0, r = n;
    while (r - l > 1) {
        int mid = (l + r) / 2;
        pair<bool, int> cur = get(mid);
        if (cur.first) l = mid; else r = mid;
    }
    if (get(r).first) cout << r << " " << get(r).second << endl; else
    cout << l << " " << get(l).second << endl;
}
 
int main() {
#ifndef ONLINE_JUDGE  
    freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#else
    // online submission
#endif    
    ios_base::sync_with_stdio(false);
    solveTask();
    return 0;
}