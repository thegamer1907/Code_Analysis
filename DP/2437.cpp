#include<bits/stdc++.h>


//#define ll int
#define  ll long long
//#define ll unsigned long long
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define yn idehfushefuwheuf
#define y1 issdehfushefuwheuf
#define endL "\n"
#define all(a) a.begin(),a.end()
#define p_b push_back
#define pll pair<ll,ll>
#define sqr(a) ((a)*(a))
#define vll vector<ll>
#define sqr(a) (a) * (a)
#define ld long double

const ll gig = 1e18;
const ll gg = 25*1e6;
const ll md = 1e9 + 7;
const ll N = 100050;
const double PI = 3.1415926535897932384626433832795;

using namespace std;


ll pref[N];
ll dp[N];
ll t, k;
int main()
{
    srand (time(NULL));
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin >> t >> k;


    dp[0] = 1;

    for (int i = 0; i <= 1e5; i++) {
        dp[i + k] += dp[i];
        dp[i + k] %= md;
        dp[i + 1] += dp[i];
        dp[i + 1] %= md;
    }

    for (int i = 1; i <= 1e5; i++) {
        pref[i] = pref[i - 1] + dp[i];
        pref[i] %= md;
    }


    while(t--) {
        ll l, r;
        cin >> l >> r;
        ll o = pref[r] - pref[l - 1];
        if (o < 0) o += md;
        cout << o << endL;
    }


}
