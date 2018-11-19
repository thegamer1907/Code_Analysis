/*
	Pratik Gajjar
*/
#include <bits/stdc++.h>
using namespace std;
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//ordered_set < int > rbtree;
//int i = *rbtree.find_by_order(2) 
//int j = rbtree.order_of_key(2)
*/
 
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef pair<ll, ll> pl;
typedef vector<pl> vpl;
typedef set<ll> setl;
typedef map<string, ll> msl;
typedef map<ll,ll> ml;

#define sortv(x) sort(x.begin(),x.end())
#define all(v) v.begin() , v.end()
#define UNIQUE(c) (c).resize(unique(all(c)) - (c).begin())
#define binarysearch(v, n) binary_search(all(v),n)
#define rev(v) reverse(all(v))
#define pb push_back
#define MP make_pair
#define F first
#define S second
#define fa(i, a, b) for (ll i = a ; i < b ; i++) 
#define f(i,b) for (ll i = 0 ; i < b ; i++)
#define fv(x , it , c ) for (x ::iterator it = (c).begin(); it != (c).end(); it++)
#define what_is(x) cerr << #x << " = " << x << endl;

const ll INF = LONG_MAX-SHRT_MAX ; 
const ll MINF = LLONG_MIN;
const ll mod = 1000000007;
const ll N = 1000010;
const ld PI = 2 * acos(0.0) ;

ll mul(ll a, ll b, ll m = mod) { return (ll)(a * b) % m;}
ll add(ll a, ll b, ll m = mod) { a += b; if(a >= m) a -= m; if(a < 0) a += m; return a;}
ll power(ll a, ll b, ll m = mod) { if(b == 0) return 1; ll x = power(a, b / 2, m); x = mul(x, x, m); return b&1 == 1 ? mul(x, a, m) : x;}

ll n  ;
string s1  ;
int main()
{
	// freopen("inp.txt","r",stdin);
	cout << fixed <<std::setprecision(12) ;   
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //----------Code-----------
    cin >> s1 ;
    cin >> n ;
    bool f1 = false  , f2 = false ;
    f(i , n){
    	string t ;
    	cin >> t ;
    	if(t == s1){
    		cout << "YES\n";
    		return 0 ;
    	}
    	if(t[1] == s1[0] ){
    		f1 = true ;
    	}
    	if(t[0] == s1[1]){
    		f2 = true ;
    	}
    }
    if(f1 && f2){
    	cout << "YES\n";
    }else{
    	cout << "NO\n";
    }

    return 0;

}