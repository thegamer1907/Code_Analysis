#include <bits/stdc++.h>
using namespace std;
#define pb emplace_back
#define fi first
#define se second
#define mp make_pair
#define SZ(x) ((int)(x.size()))
#define FOI(i,a,n) for(int (i)=int(a);(i)<=int(n);++(i))
#define FOD(i,a,n) for(int (i)=int(a);(i)>=int(n);--(i))
#define IN(x,y) ((y).find((x))!=(y).end())
#define ALL(t) t.begin(),t.end()
#define MSET(tabl,i) memset(tabl, i, sizeof(tabl))
#define PSET(x,y) fixed<<setprecision(y)<<lf(x)
#define DBG(c) cout<<#c<<" = "<<c<<endl;
#define RTIME ((double)clock()/(double)CLOCKS_PER_SEC)

template<typename T,typename S>inline bool REMIN(T&a,const S&b){return a>b?a=b,1:0;}
template<typename T,typename S>inline bool REMAX(T&a,const S&b){return a<b?a=b,1:0;}

typedef long long ll;
typedef long double lf;
typedef pair<int, int> pi;
typedef vector<pi> vpi;
typedef vector<int> vi;

int bit(ll x, int pos){ return (x >> pos) & 1; }
ll power(ll base, ll exp, ll c = 1e9 + 7) { if(!exp) return 1; ll r = power(base, exp >> 1, c); r=(r*r)%c; if(exp&1) r=(r*base)%c; return r; }

ll T,N,M,K;  
int a,b,c;
string s1,s2;

const lf PI = 2*acos(0);
const ll INF = 1e9 + 4;
const ll MOD = 1000000007;
const int NMAX = 3e5+5;
	
int e,s;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	
	cin >> s1 >> N;
	int got = 0, l = 0, r = 0;
	FOI(i, 1, N) {
		cin >> s2;
		if(s1 == s2) got = 1;
		if(s1[0] == s2[1]) s++;
		if(s2[0] == s1[1]) e++;
	}
	if(got or e and s) cout << "YES";
	else cout << "NO";
	
	return 0;
}
