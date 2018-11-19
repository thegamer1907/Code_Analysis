/*   drajingo                 **
**   Harmandeep Singh Kahlon  **
**   IIT (ISM) Dhanbad        */

/* Slow and steady passes system testing :) */

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define loop(i,n) for(i64 i=0; i<(n); ++i)
#define loop1(i,n) for(i64 i=1; i<=(n); ++i)
#define rloop(i,n) for(i64 i=(n)-1; i>=0; --i)
#define rloop1(i,n) for(i64 i=(n); i>0; --i)
#define loopit(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define xx first
#define yy second
#define pb push_back
#define eb emplace_back
#define mp std::make_pair
#define rtn return
#define Max(x,y) ((x)>(y)?(x):(y))
#define Min(x,y) ((x)<(y)?(x):(y))
#define debug(x) (cerr << #x << ": " << x << "\n")
#ifdef _WIN32
	#define pc putchar
	#define gc getchar
#else
	#define pc putchar_unlocked
	#define gc getchar_unlocked
#endif
#define RT fprintf(stderr, "\nTIME = %lf\n", 1.0 * clock()/CLOCKS_PER_SEC)

const long long INF = (1LL<<45LL);
const long long MAXLL = 9223372036854775807LL;
const unsigned long long MAXULL = 18446744073709551615LLU;
const long long MOD = 1000000007;
const long double DELTA = 0.000000001L;

typedef long long i64;
typedef unsigned long long ui64;
typedef std::pair<i64, i64> pii;
typedef std::vector<i64> vi;
typedef std::vector< std::vector<i64> > matrix;

inline i64 fmm(i64 a,i64 b,i64 m=MOD) {i64 r=0;a%=m;b%=m;while(b>0){if(b&1){r+=a;r%=m;}a+=a;a%=m;b>>=1;}rtn r%m;}
inline i64 fme(i64 a,i64 b,i64 m=MOD) {i64 r=1;a%=m;while(b>0){if(b&1){r*=a;r%=m;}a*=a;a%=m;b>>=1;}return r%m;}
inline i64 sfme(i64 a,i64 b,i64 m=MOD) {i64 r=1;a%=m;while(b>0){if(b&1)r=fmm(r,a,m);a=fmm(a,a,m);b>>=1;}rtn r%m;}
vi primes; i64 primsiz; vi fact; vi invfact;
inline void sieve(i64 n) {i64 i,j;std::vector<bool> a(n);a[0]=true;a[1]=true;for(i=2;i*i<n;++i){
	if(!a[i]){for(j=i*i;j<n;j+=i){a[j]=true;}}}for(i=2; i<n; ++i)if(!a[i])primes.pb(i);primsiz=primes.size();}
inline void sieve() {i64 n=1010000,i,j,k=0;std::vector<bool> a(n);primes.resize(79252);a[0]=a[1]=true;
	for(i=2;(j=(i<<1))<n;++i)a[j]=true;for(i=3;i*i<n;i+=2){if(!a[i]){k=(i<<1);for(j=i*i;j<n;j+=k)a[j]=true;}}
	k=0;for(i=2; i<n; ++i)if(!a[i])primes[k++]=i;primsiz=k;}
inline bool isPrimeSmall(ui64 n){if(((!(n&1))&& n!=2)||(n<2)||(n%3==0 && n!=3))return false;
	for(ui64 k=1;36*k*k-12*k<n;++k)if((n%(6*k+1)==0)||(n%(6*k-1)==0))return false;return true;}
bool _p(ui64 a,ui64 n){ui64 t,u,i,p,c=0;u=n/2,t=1;while(!(u&1)){u/=2;++t;}p=fme(a,u,n);
	for(i=1;i<=t;++i){c=(p*p)%n;if((c==1)&&(p!=1)&&(p!=n-1))rtn 1;p=c;}if(c!=1)rtn 1;rtn 0;}
inline bool isPrime(ui64 n){if(((!(n&1))&&n!=2)||(n<2)||(n%3==0&&n!=3))rtn 0;if(n<1373653){
	for(ui64 k=1;(((36*k*k)-(12*k))<n);++k)if((n%(6*k+1)==0)||(n%(6*k-1)==0))rtn 0;rtn 1;}if(n<9080191){
	if(_p(31,n)||_p(73,n))rtn 0;rtn 1;}if(_p(2,n)||_p(7,n)||_p(61,n))rtn 0;rtn 1;}
ui64 nCk(i64 n, i64 k, ui64 m=MOD) {if(k<0||k>n||n<0)rtn 0;if(k==0||k==n)rtn 1;if(fact.size()>=(ui64)n&&isPrime(m)){
rtn (((fact[n]*invfact[k])%m)*invfact[n-k])%m;}ui64 i=0,j=0,a=1;k=Min(k,n-k);for(;i<(ui64)k;++i){a=(a*(n-i))%m;
	while(j<(ui64)k && (a%(j+1)==0)){a=a/(j+1);++j;}}while(j<(ui64)k){a=a/(j+1);++j;}return a%m;}
void nCkInit(ui64 m=MOD) {i64 i,mx=1010000;fact.resize(mx+1);invfact.resize(mx+1);fact[0]=1;for(i=1;i<=mx;++i){
fact[i]=(i*fact[i-1])%m;}invfact[mx]=fme(fact[mx],m-2,m);for(i=mx-1;i>=0;--i){invfact[i]=(invfact[i+1]*(i+1))%m;}}
template<class T> T gcd(T a,T b){if(b == 0)return a;return gcd(b,a%b);}
void extGCD(i64 a,i64 b,i64 &x,i64 &y) {if(b==0){x=1,y=0;rtn;}i64 x1,y1;extGCD(b,a%b,x1,y1);x=y1;y=x1-(a/b)*y1;}
inline void get(i64 &x) {int n=0;x=0;char c=gc();if(c=='-')n=1;while(c<'0'||c>'9'){c=gc();if(c=='-')n=1;}
	while(c>='0'&&c<='9'){x=(x<<3)+(x<<1)+c-'0';c=gc();}if(n)x=-x;}
inline int get(char *p) {char c=gc();int i=0;
	while(c!='\n'&&c!='\0'&&c!=' '&&c!='\r'&&c!=EOF){p[i++]=c;c=gc();}p[i]='\0';return i;}
inline void put(i64 a) {int n=(a<0?1:0);if(n)a=-a;char b[20];int i=0;do{b[i++]=a%10+'0';a/=10;}while(a);
	if(n)pc('-');i--;while(i>=0)pc(b[i--]);pc(' ');}
inline void putln(i64 a) {int n=(a<0?1:0);if(n)a=-a;char b[20];int i=0;do{b[i++]=a%10+'0';a/=10;}while(a);
	if(n)pc('-');i--;while(i>=0)pc(b[i--]);pc('\n');}

const int K = 3;
matrix mul(matrix a,matrix b,ui64 m=MOD) {
	matrix c(K,std::vector<i64>(K));loop(ii,K)loop(jj,K)loop(kk,K)c[ii][jj]=(c[ii][jj]+a[ii][kk]*b[kk][jj])%m;rtn c;}
matrix fme(matrix a,ui64 n,ui64 m=MOD){
	if(n==1)rtn a;if(n&1)rtn mul(a,fme(a,n-1,m),m);matrix x=fme(a,n/2,m);rtn mul(x,x,m);}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

set<i64> s;

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	i64 t=0, n=0, m=0, maxx=0, minn=0, curr=0, k=0, num=0, siz=0, n1=0, n2=0, n3=0, n4=0, ind=0;
	i64 root=0, sum=0, diff=0, q=0, choice=0, d=0, len=0, begg=0, endd=0, pos=0, cnt=0, lo=0, hi=0, mid=0, ans=0;
	bool flag = false;
	std::string s1, s2, s3, str;
	char ch, ch1, ch2, ch3, *ptr;
	double dub=0;
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	cin >> n >> k;
	loop(i, n) {
		q = 0;
		loop(j, k) {
			cin >> d;
			q += d*fme(2, k-j-1);
		}
		s.insert(q);
		if(q == 0) {
			cout << "YES\n";
			return 0;
		}
		loop(j, 16) {
			if(((q&j) == 0) && (s.count(j))) {
				cout << "YES\n";
				return 0;
			}
		}
	}
	cout << "NO\n";

	return 0;
}

