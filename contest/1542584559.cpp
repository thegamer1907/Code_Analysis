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
double n, m, x, y, z;
char str[3], pa[3];
//**********Code by Gengchen********
//WA RE TLE MLE 10 pts
//Always look up the code afeter programming
//Keep Calm
//by GengChen================
bool check(double x, int fl) {
    if(x == y || x == z) return false;
    if(y > z) {
	if(fl) {
	    if(x >= y || x <= z) return false;
	}
	else {
	    if(x >= z && x <= y) return false;
	}
    } else {
	if(fl) {
	    if(x >= y && x <= z) return false;
	}
	else {
	    if(x <= y || x >= z) return false;
	}
    }	
    return true;
}
int main() {
#ifdef orz
    freopen("input", "r", stdin);
#endif
    cin >> n >> m >> x >> y >> z;
    double a = n + m / 60 + x / 3600;
    double b = (m/60 + x / 3600) * 12;
    double c = (x / 60) * 12;
    if(a >= 12) a -= 12;
    if(b >= 12) b -= 12;
    if(c >= 12) c -= 12;
    if(y >= 12) y -= 12;
    if(z >= 12) z -= 12;
    if((check(a, 1) && check(b, 1) && check(c, 1)) || (check(a, 0) && check(b, 0) && check(c, 0))) return puts("YES") & 0;
   return puts("NO") & 0; 
   return 0;
}

