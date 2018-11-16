#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define F first
#define S second
#define vi vector<int>
#define vl vector<ll>
#define vd vector<double>
#define PI acos(-1)
#define pub push_back
#define pob pop_back
#define mp make_pair
#define mmax(a, b, c) max(a, max(b, c))
#define mmin(a, b, c) min(a, min(b, c))
#define forup(i, a, b) for(int i = a; i <= b; ++i)
#define fordown(i, a, b) for(int i = a; i >= b; --i)

const int N = 1005000;
const int MAXN = 1e9 + 7;
const ll L = 1e12;
const ll MAXL = 1e18 + 9;
const double eps = 1e-11;
const ll base1 = 61;
const ll base2 = 97;
const ll mod1 = 1000001137;
const ll mod2 = 1000500013;

struct Point {
    ll x, y;
    Point (ll a, ll b) {
        x = a;
        y = b;
    }
    Point operator +(Point p) const{
        Point ans(x + p.x, y + p.y);
    }
    Point operator -(Point p) const{
        Point ans(x - p.x, y - p.y);
    }
    ll operator *(Point p) const{
        return (x * p.x + y * p.y);
    }
    ll operator &(Point p) const{
        return (x * p.y - y * p.x);
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a, b, r = 1;
    cin >> n >> a >> b;
    for (int i = 2; i < n; i *= 2) {
        if (a / i + bool(a % i) == b / i + bool(b % i)) {
            cout << r << "\n";
            return 0;
        }
        r++;
    }
    cout << "Final!\n";
    return 0;
}
