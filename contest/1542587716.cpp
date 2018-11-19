#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define mp make_pair
#define pb push_back
#define mset(a,b) memset(a,b,sizeof a)
#define R(i,s,t) for(register int i=s;i<=t;++i)
#define Rd(i,s,t) for(register int i=s;i>=t;--i)
#define RR(i,a) for(register int i=0;i<int(a.size());++i)
#define __ puts("")
#define _ putchar(' ')
#define all(T) T.begin(),T.end()
#define rall(T) T.rbegin(),T.rend()
#define sz(a) int(a.size())
#define mma max_element
#define mmi min_element
#define acu accumulate
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef double DB;
template <class T> T abs(T a){return a>=0?a:-a;}
template <class T> T gcd(T a,T b){return b?gcd(b,a%b):a;}
template <class T> T mod(T a,T b){T ret=a%b;if(ret<0)ret+=b;return ret;}
ll mulmod(ll a,ll b,ll c){if(b==0LL)return 0LL;ll ret=mulmod(a,b>>1,c);ret=(ret+ret)%c;if(b&1LL)ret=(ret+a)%c;return ret;}
ll powmod(ll a,ll b,ll c){if(b==0LL)return 1LL;ll ret=powmod(a,b>>1,c);ret=ret*ret%c;if(b&1LL)ret=ret*a%c;return ret;}
template <class T> inline void wt(T x){if (x<0)putchar('-'),x=-x;if (x<10)putchar(x + '0');else wt(x / 10), putchar(x % 10 + '0');}
template <class T> inline void rd(T&x){bool f=0; char ch;for(ch=getchar();ch<=32;ch=getchar());if (ch=='-')f=1,ch=getchar();for(x=0;ch>32;ch=getchar()) x =(x<<3)+(x<<1)+ch-'0';if(f) x=-x;}
/* .................................................................................................................................. */
const int N=100005;
int tt;
int u,v,w,n,m;
/* .................................................................................................................................. */
int main(){
	string ans;cin>>ans;
	cin>>n;
	vector<string>A;
	string s;
	R(i,1,n){
		cin>>s;
		A.pb(s);
	}
	for(auto c:A)for(auto d:A){
		string tmp=c+d;
		//cout<<tmp<<endl;
		if(tmp.find(ans)!=-1){
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	
	return 0;
}
/*


*/
