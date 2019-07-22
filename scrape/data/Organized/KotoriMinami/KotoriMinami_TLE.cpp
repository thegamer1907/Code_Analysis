// *INDENT-OFF*
#pragma GCC optimize("-O3")
#include <bits/stdc++.h>
using namespace std;typedef long long ll;typedef pair<int,int>pii;typedef pair<ll,int>pli;typedef pair<ll,ll>pll;typedef pair<double,double>pdd;typedef long double ld;
pll exgcd(const ll x,const ll y){if(!y)return{1,0};pll c=exgcd(y,x%y);return{c.second,c.first-(x/y)*c.second};}typedef vector<int>VI;typedef vector<ll>VL;
template<class T>ostream &operator<<(ostream &out,const vector<T>&vec){const int n=vec.size();out<<'[';for(int i=0;i<n;i++)out<<vec[i]<<(i==n-1?"":", ");out<<']';return out;}
template<class T,class U>ostream &operator<<(ostream&out,const pair<T,U>&p){out<<'<'<<p.first<<", "<<p.second<<'>';return out;}typedef pair<ll,int>pli;
const ll __mod__=998244353ll;ll mod(ll x,ll p=__mod__){return((x%p)+p)%p;}ll mmod(){return 1;}ll fpow(ll a,ll b,ll m){ll r=1;for(a%=m;b;a=a*a%m,b>>=1)if(b&1)r=r*a%m;return r;}
template<class...U>ll mmod(const ll&hd,const U&...tl){return mod((hd%__mod__)*mmod(tl...),__mod__);}void print(){cout<<"\n";}void Main();
template<class T,class...U>void print(const T&hd,const U&...tl){cout<<hd<<(sizeof...(tl)?" ":"");print(tl...);}void scan(){}
inline ll fmul(ll a,ll b,ll m){ll d=(ll)floor(a*(ld)b/m+0.5);ll r=(a*b-d*m)%m;if(r<0)r+=m;return r;}template<class T,class...U>void scan(T&x,U&...tl){cin>>x;scan(tl...);}
#ifdef ConanYu
void err(){cerr<<"\n";}template<typename T,typename...U>void err(const T&hd,const U&...tl){cerr<<hd<<(sizeof...(tl)?", ":"");err(tl...);}
#define debug(x...) cerr<<""#x" = ";err(x)
#else
#define debug(...) 0
#endif
#define var(type, x...) type x; scan(x)
#define SZ(o) (int(o.size()))
#define all(o) o.begin(), o.end()
int main() {
#ifdef ConanYu
  clock_t clock_start = clock(); assert(freopen("test.txt", "r", stdin));
#else
  ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#endif
  Main();
#ifdef ConanYu
  cerr << "time: " << ((clock() - clock_start) * 1.0 / CLOCKS_PER_SEC) << "\n";
#endif
}
// *INDENT-ON*
// ********************************************************************************************************

void Main() {
  ll n, m, k;
  cin >> n >> m >> k;
  vector<int> a(m);
  for(int i = 0; i < m; i++) {
    cin >> a[i];
    a[i]--;
  }
  int ans = 0;
  auto p = a.begin();
  while(p != a.end()) {
    int idx = p - a.begin();
    int fd = ((*p - idx) / k + 1) * k + idx - 1;
    p = upper_bound(p, a.end(), fd);
    ans++;
  }
  cout << ans << "\n";
}