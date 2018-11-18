# include <iostream>
# include <sstream>
# include <cstdio>
# include <cstdlib>
# include <algorithm>
# include <string>
# include <cstring>
# include <cmath>
# include <stack>
# include <queue>
# include <vector>
# include <list>
# include <map>
# include <set>
# include <deque>
# include <iterator>
# include <functional>
# include <bitset>
# include <climits>
# include <ctime>
using namespace std;
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define odd(x) ((x)&1)
#define sqr(x) ((x)*(x))
#define mp make_pair
#define pb push_back
#define fir first
#define sec second
#define all(x) (x).begin(),(x).end()
#define mem(a,x) memset(a,x,sizeof(a))
#define rep(i,a,b) for (int i=(a); i<=(b); ++i)
#define per(i,a,b) for (int i=(a); i>=(b); --i)
#define rep_it(it,x) for (__typeof((x).begin()) it=(x).begin(); it!=(x).end(); it++)
#define ____ puts("\n_______________\n\n") 
#define debug(x) ____; cout<< #x << " => " << (x) << endl
#define debug_pair(x) cout<<"\n{ "<<(x).fir<<" , "<<(x).sec<<" }\n"
#define debug_arr(x,n) ____; cout<<#x<<":\n"; rep(i,0,n) cout<<#x<<"["<<(i)<<"] => "<<x[i]<<endl
#define debug_arr2(x,n,m) ____; cout<<#x<<":\n"; rep(i,0,n) rep(j,0,m) cout<<#x<<"["<<(i)<<"]["<<(j)<<"]= "<<x[i][j]<<((j==m)?"\n\n":"    ")
#define debug_set(x) ____; cout<<#x<<": \n"; rep_it(it,x) cout<<(*it)<<" "; cout<<endl
#define debug_map(x) ____; cout<<#x<<": \n"; rep_it(it,x) debug_pair(*it)
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
const int oo = /*2 * 1000 * 1000 * 1000*/0x3f3f3f3f;
const ll ooo=9223372036854775807ll; 
const int _cnt = 1000 * 1000 + 7;
const int _p = 1000 * 1000 * 1000 + 7;
const int N=100005; 
const double PI=acos(-1.0);
const double eps=1e-9;
int o(int x) { return x%_p; }
int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }
int lcm(int a, int b) { return a / gcd(a, b)*b; }

void file_put() {
    freopen("filename.in", "r", stdin);
    freopen("filename.out", "w", stdout);
}

int n,k,T,g,ans;

int Pow(int a,int k){
	if (k==0) return 1;
	if (k==1) return a;
	int t=Pow(a,k>>1);
	t=(ll)t*t%_p;
	if (k&1) return (ll)t*a%_p; else return t;
}

inline int inv(int x) {
	if (x<=0) x+=_p;
	return Pow(x,_p-2);
}

int sum1(int q,int n){
	if (n<=0) return 0;
	if (q==1) return n;
	return (ll)inv(q-1)*(Pow(q,n)-1)%_p;
}

int sum2(int q,int n){
	if (n<=0) return 0;
	if (q==1) return (ll)n*(n+1)/2%_p;
	int t=inv(q-1);
	return (-n+(ll)q*(Pow(q,n)-1)%_p*t%_p)%_p*t%_p;
}

int solve(int n,int k,int a1,int b1,int a2,int b2,int c1,int c2,int c0) {
	if (n==k) {
		int x=(ll)b2*inv(1-a2)%_p;
		return ((ll)c1*x%_p+c0)%_p;
	}
	int q=(n-1)/k,r=(n-1)%k+1,a,b,A1,B1,A2,B2,C1,C2,C0;
	a=(ll)a2*Pow(a1,q-1)%_p,b=(ll)a2*b1%_p*sum1(a1,q-1)%_p+b2,b%=_p;
	A1=inv(a),B1=(ll)-b*A1%_p;
	a=(ll)a2*Pow(a1,q)%_p,b=(ll)a2*b1%_p*sum1(a1,q)%_p+b2,b%=_p;
	A2=inv(a),B2=(ll)-b*A2%_p;
	C1=c1+(ll)c2*a1%_p*sum1(a1,q)%_p,C1%=_p;
	C2=c1+(ll)c2*a1%_p*sum1(a1,q-1)%_p,C2%=_p;
	C0=c0+(ll)c2*b1%_p*((ll)r*sum1(a1,q)%_p+(ll)k*sum2(a1,q-1)%_p)%_p,C0%=_p;
	return solve(k,r,A1,B1,A2,B2,C1,C2,C0);
}

int main() {
    //file_put();
    
    scanf("%d",&T);
    while (T--) {
    	scanf("%d%d",&n,&k);
    	g=gcd(n,k);
    	n/=g,k/=g;
    	ans=solve(n,k,1,1,(_p+1)/2,1,1,1,0);
    	ans=(ll)ans*inv(n)%_p;
    	ans=((ll)ans+_p)%_p;
    	printf("%d\n",ans);
	}
	
    return 0;
}

