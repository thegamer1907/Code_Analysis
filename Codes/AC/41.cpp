#include <bits/stdc++.h>

#define loop(i,n)    for( int i=0; i<n; i++ )
#define loop1(i,a,n) for( int i=a; i<n; i++ )
#define vloop(i,a)   for( vector<int>::iterator i=a.begin(); i!=a.end(); i++ )
#define dloop(i,a)   for( deque<int>::iterator i=a.begin(); i!=a.end(); i++ )
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

inline ll pwr(ll base,ll n,ll m){ll ans=1;while(n>0){if(n%2==1)ans=(ans*base)%m;base=(base*base)%m;n/=2;}return ans;}

bool perfectSquare( ll d ) {

    if( d == 1 )
        return true;
    ll s = sqrt(d);
    if( s*s == d )
        return true;
    return false;

}

int main() {
    fi;

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int n;
    long double l;
    cin >> n >> l;

    long double a[n], mx = 0;

    loop(i,n)
        cin >> a[i];

    sort(a,a+n);

    loop(i,n) {

        if( i > 0 ) {
            mx = max(mx,a[i]-a[i-1]);
        }

    }


    long double ans = 0.5 * mx;
    cout << setprecision(12);
    cout << fixed;
    cout << max( ans, max( a[0], l-a[n-1] ) );
    return 0;
}