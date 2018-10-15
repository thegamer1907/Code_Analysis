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

const int sz = (int)3e5 + 10;
int a[sz], b[sz], n, k, ind;

int check( int len ) {
    int mn = n+1;

    loop(i,n-len+1) {
        int tt = 0;
        if( i > 0 )
            tt = b[i-1];
        if( b[i+len-1] - tt <= k ) {
            return i;
        }
    }
    return -1;
}

void bs( int lo, int hi ) {

    int md = lo + (hi-lo+1)/2;

    while( hi-lo > 1 ) {
        md = lo + (hi-lo+1)/2;
        if( check(md) != -1 ) {
            lo = md;
        } else {
            hi = md-1;
        }
    }
    int v = check(hi);
    if( v != -1 ) {
        cout<<hi<<"\n";
        loop1(i,v,v+hi)
            a[i] = 1;
        return;
    }
    v = check(lo);
    cout<<lo<<"\n";
    loop1(i,v,v+lo)
        a[i] = 1;
}

int main() {
    fi;

    cin>>n>>k;
    loop(i,n) {
        cin>>a[i];
        b[i] = !a[i];
        if( i > 0 )
            b[i] += b[i-1];
    }
    bs(0,n);
    loop(i,n)
        cout<<a[i]<<" ";
    return 0;
}
