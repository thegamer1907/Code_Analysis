#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

//#define PB push_back
#define PB emplace_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
//#define harmonic(n) 0.57721566490153286l+log(n)

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

inline bool checkBit(ll n, int i) { return n&(1LL<<i); }
inline ll setBit(ll n, int i) { return n|(1LL<<i);; }
inline ll resetBit(ll n, int i) { return n&(~(1LL<<i)); }

int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
inline bool isLeapYear(ll year) { return (year%400==0) || (year%4==0 && year%100!=0); }
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

/*
bool seive[1010000];
vi prime;

void seiveGen(int limit) {
    limit += 100;
    int sqrtn = sqrt(limit);
    for(int i = 3; i <= sqrtn; i += 2) {
            if(!seive[i>>1]) {
                    for(int j = i * i; j < limit; j += i + i) {
                            seive[j>>1] = 1;
                    }
            }
    }
    prime.PB(2);
    for(int i = 3; i < limit; i += 2) {
            if(!seive[i>>1]) prime.PB(i);
    }
}
*/

//
//debug
#ifdef mohaimin
template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

clock_t tStart = clock();
#define timeStamp dbg("Execution Time: ", (double)(clock() - tStart)/CLOCKS_PER_SEC)

void faltu () {
            cerr << endl;
}

template <typename T>
void faltu( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
            cerr << arg << ' ';
                faltu(rest...);
}
#else
#define dbg(args...)
#endif // mohaimin


int main()
{
	optimize();
	int n, k;
	cin >> n >> k;
	if( k == 1 ) 
	{
		bool ok = 0;
		set <int> s;
		for( int i = 0, x; i < n; ++i )
		{
			cin >> x;
			if( x == 0 ) ok = 1;
			s.insert(x);
		}
		if( s.size() == 2 ) 
		{
			cout << "YES";
			return 0;
		}
		else if( s.size() == 1 )
		{
			if( ok ) 
			{
				cout << "YES";
				return 0;
			}
			else 
			{
				cout << "NO";
				return 0;
			}
		}
	}
	else if( k == 2 )
	{
		set <pii> s;
		for( int i = 0, x, y; i < n; ++i )
		{
			cin >> x >> y;
			s.insert( MP(x, y) );
		}
		set <pii> :: iterator itr;
		vii v;
		for( itr = s.begin(); itr != s.end(); ++itr )
		{
			v.PB(*itr);
		}
		int l = v.size();
		if( l == 1 && v[0].F == 0 && v[0].S == 0 )
		{
			cout << "YES";
			return 0;
		}
		for( int i = 0; i < l; ++i )
		{
			for( int j = 0; j < l; ++j )
			{
				if( i == j ) continue;
				if( v[i].F+v[j].F <= 1 && v[i].S+v[j].S <= 1 )
				{
					cout << "YES";
					return 0;
				}
			}
		}
		cout << "NO";
		return 0;
	}
	else if( k == 3 )
	{
		set < pair<pii, int> > s;
		pair <pii, int> p;
		for( int i = 0, x, y, z; i < n; ++i )
		{
			cin >> x >> y >> z;
			s.insert( MP( MP(x, y), z ) );
		}
		set < pair<pii, int> > :: iterator itr;
		vector < pair<pii, int> > v;
		for( itr = s.begin(); itr != s.end(); ++itr )
		{
			v.PB(*itr);
		}
		int l = v.size();
		if( l == 1 && v[0].F.F == 0 && v[0].F.S == 0 && v[0].S == 0 )
		{
			cout << "YES";
			return 0;
		}
		for( int i = 0; i < l; ++i )
		{
			for( int j = 0; j < l; ++j )
			{
				if( i == j ) continue;
				if( v[i].F.F+v[j].F.F <= 1 && v[i].F.S+v[j].F.S <= 1 && v[i].S+v[j].S <= 1 )
				{
					cout << "YES";
					return 0;
				}
			}
		}
		cout << "NO";
		return 0;
	}
	else if( k == 4 )
	{
		set < pair<pii, pii> > s;
		for( int i = 0, w, x, y, z; i < n; ++i )
		{
			cin >> w >> x >> y >> z;
			s.insert( MP( MP(w, x), MP(y, z) ) );
		}
		set < pair<pii, pii> > :: iterator itr;
		vector < pair<pii, pii> > v;
		for( itr = s.begin(); itr != s.end(); ++itr )
		{
			v.PB( *itr );
		}
		int l = v.size();
		if( l == 1 && v[0].F.F == 0 && v[0].F.S == 0 && v[0].S.F == 0 && v[0].S.S == 0 )
		{
			cout << "YES";
			return 0;
		}
		for( int i = 0; i < l; ++i )
		{
			for( int j = 0; j < l; ++j )
			{
				if( i == j ) continue;
				if( v[i].F.F+v[j].F.F <= 1 && v[i].F.S+v[j].F.S <= 1 && v[i].S.F+v[j].S.F <= 1 && v[i].S.S+v[j].S.S <= 1 )
				{
					cout << "YES";
					return 0;
				}
			}
		}
		cout << "NO";
		return 0;
	}
}











