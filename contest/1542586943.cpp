#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
#include <queue>
#include <stack>
#include <cmath>
#include <set>
#include <map>
#include <bitset>
#include <cstdlib>
using namespace std;
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define ull unsigned long long
#define null NULL
#define PI M_PI
#define sc(x) scanf("%d", &x)
#define sc64(x) scanf("%I64d", &x)
#define scln(x) scanf("%d\n", &x)
#define sc64ln(x) scanf("%I64d\n", &x)
#define pr(x) printf("%d", x)
#define prs(x) printf("x")
#define prln(x) printf("%d\n", x)
#define prsp(x) printf("%d ", x)
#define pr64(x) printf("%I64d", x)
#define pr64ln(x) printf("%I64d\n", x)
#define pr64sp(x) printf("%I64d ", x)
#define rep(i,n) for (int i = 1;i <= (n); ++i)
#define repr(i,n) for (int i = (n);i > 0; --i)
#define repab(i,a,b) for (int i = a;i <= b; ++i)
#define Rep(i,n) for (int i = 0;i < (n); ++i)
#define Repr(i,n) for (int i = (n)-1;i >= 0; --i)
#define Repab(i,a,b) for (int i = a;i < b; ++i)
#define fi first
#define se second
#define SET(__set, val) memset(__set, val, sizeof __set)

typedef double db;
typedef long double ld;
typedef long long ll;
typedef pair<ll, ll> pll;

template<class T> T gcd(T a, T b){if(!b)return a;return gcd(b,a%b);}
template<class T> T power(T a, T b){T res(1);while(b){if(b&1)res=res*a;a=a*a;b>>=1;}return res;}
template<class T> T powerM(T a, T b, T mod){T res(1);while(b){if(b&1)res=res*a%mod;a=a*a%mod;b>>=1;}return res;}

const int infi = 2147483647;
const ll infl = 9223372036854775807;

#define N 1000
#define M 1000

int h,m,s,t1,t2;
int main(){
	cin>>h>>m>>s>>t1>>t2;
	h *= 30;
	m *= 6;
	s *= 6;
	t1 *= 30;
	t2 *= 30;
//	cout<<h<<" "<<m<<" "<<s<<" "<<t1<<" "<<t2<<endl;
	h%=360;
	t1%=360;
	t2%=360;
	if(t1>t2)swap(t1,t2);
	int ok1 = 1, ok2 = 1;
	if((h>=t1&&h<t2)||(m>=t1&&m<t2)||(s>t1&&s<t2))ok1 = 0;
	if((h<t1)||(h>=t2)||(m<t1)||(m>=t2)||(s<t1)||(s>=t2))ok2 = 0;
	puts((ok1||ok2)?"YES":"NO");
	return 0;
}
