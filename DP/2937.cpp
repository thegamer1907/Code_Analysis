#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F(i, j, k) for(register int i = j; i <= k; ++i)
#define D(i, j, k) for(register int i = j; i >= k; --i)
#define random(x) (rand() % (x)) + 1
#define pb push_back
#define pp pair<int, int>
#define mp make_pair
/// ********* debug template *********
template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
    typename vector< T > :: const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
    os << "[";
    typename set< T > :: const_iterator it;
    for ( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
    os << "[";
    typename map< F , S >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}
#define deb(x) cerr << #x << " = " << x << endl;
//***********var defination*********
const int maxn = 2e5+5;
int n, m, x, y, z;
int a[maxn], b[maxn];
//**********Code by Gengchen********
//WA RE TLE MLE 10 pts
//Always look up the code afeter programming
//Keep Calm
//by GengChen================
int main() {
#ifdef orz
    freopen("input", "r", stdin);
#endif
    cin >>n >> m;
    if(m > 1) return puts("Yes") & 0;
    F(i, 1, n) cin >> a[i];
    cin >> x;
    F(i, 1, n) if(!a[i]) a[i] = x;
    bool fl = 1;
    F(i, 2, n) if(a[i] <= a[i-1]) fl = 0;
    if(fl) return puts("No") & 0;
    printf("Yes\n");
    return 0;
}

