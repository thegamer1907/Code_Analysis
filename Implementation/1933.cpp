#include <bits/stdc++.h>
#include <utility>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

typedef long long ll;
typedef pair<int, int> pii;
#define FOR(i, init, n) for(int i = init; i < n; i++)
#define F first
#define S second
#define INF (1LL<<61)
#define FIN ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PB(a) push_back(a)
#define MK(a,b) make_pair(a,b)

const int MAXN = 205;
int n, x, y, z, a[3];
              
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b,a%b); } 
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }


int main() {
    cin >> n;
    FOR(_,0, n) {
        cin >> x >> y >> z;
        a[0] += x;
        a[1] += y;
        a[2] += z;
    }
    if (a[0] == 0 && a[1] == 0 && a[2] == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}