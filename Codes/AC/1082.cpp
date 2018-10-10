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

int f(int size, int need) {
    int delays = (size - 1) / need;
    return size + delays * 5;
}

int main() {
    int n = r(), d = r();
    
    vii f = rvii(n);
    sort(f.begin(), f.end());
    
    ll answer = 0;
    
    ll sum = 0;
    for (int left = 0, right = 0; right < n; ++right) {
        sum += f[right].second;
        
        while (f[right].first - d >= f[left].first) {
            sum -= f[left].second;
            ++left;
        }
        
        answer = max(answer, sum);
    }
    
    cout << answer << endl;
    
    return 0;
}