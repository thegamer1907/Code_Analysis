#include <iostream>
#include <vector>
#include <math.h>
#include<algorithm>
#include<string>
#include <map>
#include <string>
#include <sstream>
#include <set>
#include <queue>

using namespace std;

#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x, y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define debug3(x, y, z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n";


typedef long long ll;
typedef double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

int dps[1022], pk;

int solve(string s) {
    for (int i = 0; i < s.size(); i++) {
        dps[i] = 1;
    }
    for (int i = 1; i < s.size(); i++) {
        int maxi = 0;
        for (int j = i - 1; j >= 0; j--) {
            if (s[i] == s[j]) {
                int t = maxi;
                maxi = max(maxi, dps[j]);
                dps[j] = max(dps[j], t + 2);
            } else {
                maxi = max(maxi, dps[j]);
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
        ans = max(ans, dps[i]);
    return ans;
}

string lltos(int t) {
    stringstream ss;
    ss << t;
    string b;
    ss >> b;
    return b;
}

long long stollq(string t) {
    stringstream ss;
    ss << t;
    long long b;
    ss >> b;
    return b;
}

bool check(string t) {
    int p = 0;
    for (int i = 0; i < t.size(); i++)
        p += t[i] - '0';
    return p == 10;
}

bool check(long long x, long long y, long long z) {
    return (x + y > z && x + z > y && z + y > x);
}

bool is_prime(int n) {
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

const int N = 1e6 + 2, MOD = 1e9 + 9;

long long modulo_Euclidian(long long a, long long b) {
    long long m = a % b;
    if (m < 0) {
        m = (b < 0) ? m - b : m + b;
    }
    return m;
}

ll binpow(ll a, ll n) {
    if (n == 0)
        return 1;
    if (n % 2 == 1) {
        ll b = modulo_Euclidian(binpow(a, n - 1), MOD);
        b = modulo_Euclidian(b * a, MOD);
        return b;
    } else {
        ll b = binpow(a, n / 2);
        b = modulo_Euclidian(b, MOD);
        b = modulo_Euclidian(b * b, MOD);
        return b;
    }
}

string s;
ll nb, ns, nc, pb, ps, pc, p, qb, qs, qc;

bool good(ll v) {
    ll checker = p;

    if (nb < v * qb && qb > 0)
        checker -= qb * pb * v - nb * pb;
    if (ns < v * qs && qs > 0)
        checker -= qs * ps * v - ns * ps;
    if (nc < v * qc && qc > 0)
        checker -= qc * pc * v - nc * pc;

    return checker >= 0;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s >> nb >> ns >> nc >> pb >> ps >> pc >> p;
    ll l = 0, r = 1e13 + 1;

    for (char i : s) {
        if (i == 'B')
            qb++;
        if (i == 'S')
            qs++;
        if (i == 'C')
            qc++;
    }
    while (l + 1 < r) {
        ll m = (l + r) >> 1;
        if (good(m))
            l = m;
        else
            r = m;
    }


    cout << l;

    return 0;
}