#include <bits/stdc++.h>
#define ll long long int
#define imax INT_MAX
#define llmax LLONG_MAX
#define MOD 1000000007
#define M 1000000007
#define MAXN 1000005
#define INF 10000001
#define FOR(i,n) for(ll i=0;i<n;i++)
#define REP(i,m,n) for(ll i=m;i<=n;i++)
#define TEST(t) int t;cin>>t;while(t--)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"
#define sp " "
#define mark cout<<"\n******\n"<<endl;
#define ld long double
/**
#define num first
#define den second
#define sec second
**/
 
 
/* Constants rounded for 21 decimals. */
/**
#define M_E         2.71828182845904523536
#define M_LOG2E     1.44269504088896340736
#define M_LOG10E    0.434294481903251827651
#define M_LN2       0.693147180559945309417
#define M_LN10      2.30258509299404568402
#define M_PI        3.14159265358979323846
#define M_PI_2      1.57079632679489661923
#define M_PI_4      0.785398163397448309616
#define M_1_PI      0.318309886183790671538
#define M_2_PI      0.636619772367581343076
#define M_1_SQRTPI  0.564189583547756286948
#define M_2_SQRTPI  1.12837916709551257390
#define M_SQRT2     1.41421356237309504880
#define M_SQRT_2    0.707106781186547524401
*/
using namespace std;

void swap(ll &a, ll &b) {
    ll tmp=a;
    a=b;
    b=tmp;
}

int main()
{
    fast_io

    ll n,m,x;
    cin>>n>>m;
    ll a[n];
    FOR(i,n)
        cin>>a[i];

    ll dist[n];
    set<ll> s;
    for(int i=n-1;i>=0;i--) {
        s.insert(a[i]);
        dist[i]=s.size();
    }

    while(m--) {
        cin>>x;
        cout<<dist[x-1]<<en;
    }
    
    return 0;
}
