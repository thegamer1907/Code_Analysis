#include <bits/stdc++.h>

#define loop(i, n)    for(int i = 0; i < n; i++)
#define loop1(i, a, n) for(int i = a; i < n; i++)
#define vloop(i, a)   for(vector<int>::iterator i=a.begin(); i != a.end(); i++)
#define dloop(i, a)   for(deque<int>::iterator i=a.begin(); i != a.end(); i++)
#define PI M_PI
#define bc __builtin_popcountll
#define gc getchar_unlocked
#define pc putchar_unlocked
#define pb push_back
#define pf push_front
#define rf pop_front
#define rb pop_back
#define mp make_pair
#define fs first
#define sc second
#define fi ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e9 + 7;
const ll INF = 1e9;

inline ll pwr(ll base, ll n, ll m){ll ans = 1;while(n>0){if(n%2 == 1)ans = (ans*base)%m;base = (base * base)%m;n/=2;}return ans;}

ll n[3], p[3], req[3], r;
string recipe;
map<char,int>m;
int l;



ll check( ll num ) {

    ll req0 = num * req[0];
    ll req1 = num * req[1];
    ll req2 = num * req[2];

    req0 = max(0LL, req0 - n[0]); 
    req1 = max(0LL, req1 - n[1]);
    req2 = max(0LL, req2 - n[2]);

    return (req0 * p[0]) + (req1 * p[1]) + (req2 * p[2]);

}

ll bs( ll lo, ll hi ) {

    ll md = lo + ((hi-lo+1)>>1);

    while( hi - lo > 1 ) {

        md = lo + ((hi-lo+1)>>1);

        if( check(md) <= r )
            lo = md;
        else
            hi = md-1;

    }

    if( check(hi) <= r )
        return hi;
    return hi-1;

}

int main() {
    fi;

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    m['B'] = 0;
    m['S'] = 1;
    m['C'] = 2;

    cin >> recipe;
    l = recipe.length();

    memset(req, 0, sizeof(req));

    loop(i, l) {
        req[ m[recipe[i]] ]++;
    }

    loop(i, 3)
        cin >> n[i];
    loop(i, 3)
        cin >> p[i];

    cin >> r;

    cout << bs(0, (ll)1e13);
    return 0;
}
