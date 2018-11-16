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

bool prime[100005];
void seive()
{
	memset(prime,1,sizepf(prime));
	prime[0]=0;
	prime[1]=0;
	for(ll i=2;i*i<=100000;i++)
	{
		if(prime[i]==1)
		{
			for(ll j=i*i;j<=100000;j+=i)
			prime[j]=0;
		}
	}
	
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
	string s; cin>>s;
	bool flag1=false,flag2=false;
	FOR(i,s.size()){
		if(s[i]=='A' && s[i+1]=='B'){
			FOR2(j,i+2,s.size()){
				if(s[j]=='B' && s[j+1]=='A'){
					flag1 = true; break;
				}
			}
		}
		if(flag1)break;
	}
	FOR(i,s.size()){
		if(s[i]=='B' && s[i+1]=='A'){
			FOR2(j,i+2,s.size()){
				if(s[j]=='A' && s[j+1]=='B'){
					flag2 = true; break;
				}
			}
		}
		if(flag2)break;
	}
	if(flag1 || flag2)cout<<"YES";
	else cout<<"NO";
}
