#include <bits/stdc++.h>
using namespace std;
template <class T> int size(const T &x) { return x.size(); }
#define rep(i,a,b) for (decltype(a) i=(a); i<(b); ++i)
#define iter(it,c) for (decltype((c).begin()) it = (c).begin(); it != (c).end(); ++it)
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef unsigned long long ull;
const int INF = ~(1<<31);

const double EPS = 1e-9;
const double pi = acos(-1);
typedef unsigned long long ull;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> T smod(T a, T b) {
  return (a % b + b) % b; }

#define P(p) const point &p
#define L(p0, p1) P(p0), P(p1)
#define C(p0, r) P(p0), double r
#define PP(pp) pair<point,point> &pp
typedef complex<double> point;
double dot(P(a), P(b)) { return real(conj(a) * b); }
double cross(P(a), P(b)) { return imag(conj(a) * b); }
point rotate(P(p), double radians = pi / 2,
             P(about) = point(0,0)) {
  return (p - about) * exp(point(0, radians)) + about; }
point reflect(P(p), L(about1, about2)) {
  point z = p - about1, w = about2 - about1;
  return conj(z / w) * w + about1; }
point proj(P(u), P(v)) { return dot(u, v) / dot(u, u) * u; }
point normalize(P(p), double k = 1.0) {
  return abs(p) == 0 ? point(0,0) : p / abs(p) * k; }
double ccw(P(a), P(b), P(c)) { return cross(b - a, c - b); }
bool collinear(P(a), P(b), P(c)) {
  return abs(ccw(a, b, c)) < EPS; }
double angle(P(a), P(b), P(c)) {
  return acos(dot(b - a, c - b) / abs(b - a) / abs(c - b)); }
double signed_angle(P(a), P(b), P(c)) {
  return asin(cross(b - a, c - b) / abs(b - a) / abs(c - b)); }
double angle(P(p)) { return atan2(imag(p), real(p)); }
point perp(P(p)) { return point(-imag(p), real(p)); }
double progress(P(p), L(a, b)) {
  if (abs(real(a) - real(b)) < EPS)
    return (imag(p) - imag(a)) / (imag(b) - imag(a));
  else return (real(p) - real(a)) / (real(b) - real(a)); }

int main()
{
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h = h*5*3600 + m*60 + s;
    m = 3600*m + 60*s;
    s = 3600*s;
    t1 *= 5 * 3600;
    t2 *= 5 * 3600;
    int p = 60*60*60;
    h %= p;
    t1 %= p;
    t2 %= p;
    if(t1 == t2)
    {
        cout << "YES" << endl;
        return 0;
    }
    int cur = t1;

    while(true)
    {
        cur = (cur + 1) % p;
        if(cur == t2)
        {
            cout << "YES" << endl;
            return 0;
        }
        if(cur == h || cur == m || cur == s) break;
    }
    cur = t1;
    while(true)
    {
        cur = (cur + p - 1) % p;
        if(cur == t2)
        {
            cout << "YES" << endl;
            return 0;
        }
        if(cur == h || cur == m || cur == s) break;
    }
    cout << "NO" << endl;
    
    return 0;
}
