#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define inf 0x3f3f3f3f
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repp(i,a,b) for(ll i=a;i<=b;i++)
#define rep1(i,a,b) for(ll i=a;i>=b;i--)
#define mem(gv) memset(gv,0,sizeof(gv))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define QAQ 0
#define miaojie1
#ifdef miaojie
  #define dbg(args...) do {cout << #args << " : "; err(args);} while (0)
void err() {std::cout << std::endl;}
template<typename T, typename...Args>
void err(T a, Args...args){std::cout << a << ' '; err(args...);}
#else
  #define dbg(...)
#endif

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pLL;
const int mod=1e9+7;
const int maxn=2e5+22;

ll n,m,k,a,ans;
queue<ll>q;

int main(){
	scanf("%lld%lld%lld",&n,&m,&k);
	ll st=k,c=0;
	repp(i,1,m){
		scanf("%lld",&a);
		q.push(a);
	}
	while(!q.empty()){
		ll t=q.front()-c;
		dbg(t,c);
		if(t>st){
			st+=k;
			continue;
		}
		else{
			ll cnt=0;
			while(!q.empty() && t<=st){
				q.pop();
				cnt++;
				t=q.front()-c;
			}
			c+=cnt;
			ans++;
		}
	}
	printf("%lld",ans);
	return QAQ;
}