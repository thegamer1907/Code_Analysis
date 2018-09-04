#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

typedef vector<int> vi;

typedef long long ll;
typedef vector<ll> vl;

typedef pair<int, int> ii;
typedef vector<ii> vii;

void sort_vi(vi & a) {
    sort(a.begin(), a.end());
}

void set_precision(int digits) {
    cout.precision(digits);
    cout.setf(ios::fixed);
}

template <class T = int>
T r() {
    T x;
    cin >> x;
    return x;
}

ll rl() {
    return r<ll>();
}

string rs() {
    return r<string>();
}

vi rvi(int n) {
    vi a(n, 0);
    for (int i = 0; i < n; ++i) a[i] = r();
    return a;
}

vi rsvi(int n) {
    vi a = rvi(n);
    sort_vi(a);
    return a;
}

ii rii() {
    int f = r();
    int s = r();
    
    return make_pair(f, s);
}

vii rvii(int n) {
    vii a(n);
    for (int i = 0; i < n; ++i) a[i] = rii();
    return a;
}

ll gcd(ll a, ll b) {
    return (a == 0 ? b : gcd(b % a, a));
}

void yn(bool can) {
    cout << (can ? "YES" : "NO") << endl;
}

int s(int x) {
    int sum = 0;
    while (x > 0) { sum += x % 10; x /= 10; }
    return sum;
}

int main() {
    int k = r();
    
    int answer = -1;
    for (int i = 0; ; ++i) {
        if (s(i) == 10) {
            --k;
            if (k == 0) {
                answer = i;
                break;
            }
        }
    }
    
    cout << answer << endl;
    
    return 0;
}