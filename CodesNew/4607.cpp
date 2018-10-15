#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef pair<int, int> ii;
typedef vector<ii> vii;
const int INF = int (1e9) + int (1e5);
const ll INFL = ll(2e18) + ll(1e10);
const ui MOD = 1E9 + 7;
const double EPS = 1e-9;
#define FOR(i,n) for (long long i=0;i<(n);++i)
#define FOR2(i,a,b) for (long long i=(a);i<(b);++i)
#define ROF(i,x) for(long long i = (x) ; i >= 0 ; --i)
#define ROF2(i,x,y) for(long long i = (x) ; i >= (y) ; --i)
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define ALL(a) (a).begin(),(a).end()
#define ODD(x) (((x)&1)==0?(0):(1))
#define FAST ios_base::sync_with_stdio(false); cin.tie(0)

/*template<class T,class U>
ostream &operator<<(ostream &os,const pair<T,U> &x) {
    return os<<"("<<x.first<<","<<x.second<<")";
}

template<class T>
ostream &operator<<(ostream &os,const vector<T> &x) {
    os << '[';
    if ( !x.empty() ) {
        std::copy (x.begin(), x.end(), std::ostream_iterator<T>(os, ","));
        os << "\b";
    }
    os << "]";
    return os;
}
template<class T>
ostream &operator<<(ostream &os,const vector<vector<T> > &x) {
    os << '[';
    if ( !x.empty() ) {
        os << x[0];
        for (int i=1;i<x.size();i++) os << endl << " " << x[i];
    } else os << "[]";
    os << "]";
    return os;
}
template<class T>
bool isPrime(T n){
	if(n==1)return false;
	T i = 2;
	while(i*i<=n){
	   if(n%i==0)return false;
	   i+=1;
	}
    return true;
}

template < class T > inline T gcd(T a, T b) { return a ? gcd(b % a, a) : b; }
template < class T > inline T LCM(T a, T b) { return (a * b) / GCD(a, b); }
template < class T > inline string toString(T a) {return to_string(a); }  // Convert int to string
template < class T > inline void toInt(string s, T &x) { stringstream str(s); str >> x;}  // Convert string to int
*/
int main(){
	/*freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);*/
	FAST;
	int n; cin>>n;
	vector<int> arr;
	FOR(i,n){
		int num; cin>>num; arr.PB(num);
	}
	sort(ALL(arr));
	int p = n/2;
	int count=0;
	FOR(i,n/2){
		while(1){
			if(arr[p]>=2*arr[i]){
				++count;
				++p; break;
			}
			else{
				++p;
			}
			if(p==n)break;
		}
		if(p==n)break;
	}
	cout<<count+(n-2*count);
}
