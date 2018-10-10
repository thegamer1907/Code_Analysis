#include<bits/stdc++.h>
//#define ll int
#define  ll long long
//#define ll unsigned long long
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define yn idehfushefuwheuf
//#define y1 issdehfushefuwheuf
#define endL "\n"
#define all(a) a.begin(),a.end()
#define p_b push_back
#define pll pair<ll,ll>
#define sqr(a) ((a)*(a))
#define vll vector<ll>

const ll gig = 1e18;
const ll gg = 25*1e6;
const ll md = 1e9 + 7;
const ll N = 100050;
const double PI = 3.1415926535897932384626433832795;

using namespace std;
double p[1111];

int main()
{
    srand (time(NULL));
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//    freopen("circles.in", "r", stdin);
//    freopen("circles.out", "w", stdout);

    ll n, d, f;

    cin >> n >> d;
    for (int i = 1; i <= n; i++) cin >> p[i];

    sort(p + 1, p + n + 1);

    double l = 0.5, lp = 0;
    double r = d, c;


    while (r - l > 1e-10) {
        c = (r + l) / 2;
        lp = 0;
        f = 1;
//        cout << fixed << l << " " << r << " " << c << endl;
        for (int i = 1; i <= n; i++) {
            if (p[i] - c - lp > 1e-10) {
//                cout << fixed << p[i] - c - lp << endl;
                l = c; f = 0;
                break;
            }
            lp = p[i] + c;
        }
        if (d - lp > 1e-10) {
            l = c;
            continue;   
        }
        if (f) r = c;
    }
    cout << fixed << setprecision(11) << l << endl;
}



