#include <bits/stdc++.h>

#define loop(i,n)    for( int i=0; i<n; i++ )
#define loop1(i,a,n) for( int i=a; i<n; i++ )
#define vloop(i,a)   for( vector<int>::iterator i=a.begin(); i!=a.end(); i++ )
#define dloop(i,a)   for( deque<int>::iterator i=a.begin(); i!=a.end(); i++ )
#define PI 3.14159265
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

map<ll,int>freq, freq2;

int main() {
    fi;

    int n;
    ll k;
    cin>>n>>k;
    ll a[n];
    ll w1[n] = {0}, w2[n] = {0}, ans = 0;

    loop(i,n) {
        cin>>a[i];
        if( a[i] % k == 0 )
            w1[i] = freq[ a[i] / k ];
        freq[a[i]]++;
    }

    for( int i = n-1; i >= 1; i-- ) {
        ans += ( w1[i] * freq2[a[i]*k] );
        freq2[a[i]]++;
    }
    cout<<ans;

    return 0;
}
