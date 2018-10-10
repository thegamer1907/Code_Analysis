#include <bits/stdc++.h>

using namespace std;

#define endl                           '\n'
#define mk                             make_pair
#define pb                             push_back
#define REP(i, a, b)                   for (int i = int(a); i < int(b); ++i)
#define rREP(i, a, b)                  for (int i = int(a); i > int(b); --i)
#define ALL(v)				           ((v).begin()), ((v).end())
#define toInt(x)                       (x - '0')
#define UNIQUE(c)                      (c).resize(unique(ALL(c)) - (c).begin())
#define F                              first
#define S                              second
//             bit masking
#define isOn(S, j)                     (S & (1 << j))
#define setBit(S, j)                   (S |= (1 << j))
#define clearBit(S, j)                 (S &= ~(1 << j))
#define toggleBit(S, j)                (S ^= (1 << j))
#define lowBit(S)                      (S & (-S))
#define setAll(S, n)                   (S = (1 << n) - 1)

#define modulo(S, N)                   ((S) & (N - 1))   // returns S % N, where N is a power of 2
#define isPowerOfTwo(S)                (!(S & (S - 1)))
#define nearestPowerOfTwo(S)           ((int)pow(2.0, (int)((log((double)S) / log(2.0)) + 0.5)))
#define turnOffLastBit(S)              ((S) & (S - 1))
#define turnOnLastZero(S)              ((S) | (S + 1))
#define turnOffLastConsecutiveBits(S)  ((S) & (S + 1))
#define turnOnLastConsecutiveZeroes(S) ((S) | (S - 1))

typedef long long              ll;
typedef vector <int>           vi;
typedef pair<int, int>         ii;

const int INF = (int)1e9;
const double PI = 2 * acos(0.0);
const double eps = 1e-9;
const int NPOS = -1;
const int MAX = 1000;

ll B, S, C;
ll n1, n2, n3;
ll p1, p2, p3, pr;
ll r, ans;
string s;
bool can(ll x)
{
    ll a1, a2, a3, N1, N2, N3, rr = r;
    if(B != 0)a1 = n1/B, N1 = n1%B;
    if(S != 0)a2 = n2/S, N2 = n2%S;
    if(C != 0)a3 = n3/C, N3 = n3%C;
    if(B != 0 && a1 < x) rr -= ((x-a1)*B-N1)*p1;
    if(S != 0 && a2 < x) rr -= ((x-a2)*S-N2)*p2;
    if(C != 0 && a3 < x) rr -= ((x-a3)*C-N3)*p3;
    if(rr < 0) return false;
    return true;
    // BBBSSC
    //6 4 1
    // 1 2 3
    // 4
}
int main()
{
ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
//    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> s;
    REP(i, 0, s.size())
        if(s[i] == 'B') ++B;
        else if(s[i] == 'S') ++S;
        else ++C;
    cin >> n1 >> n2 >> n3;
    cin >> p1 >> p2 >> p3;
    cin >> r;
    ll lo = 0, hi = 1e14, mid;
    while(lo <= hi)
    {
        mid = (lo + hi)/2;
        if(can(mid)) ans = max(mid, ans), lo = mid+1;
        else hi = mid-1;
    }
    cout << ans << endl;
	return 0;
}
