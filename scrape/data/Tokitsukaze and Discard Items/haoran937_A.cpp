#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define rep(i, a, b) for(int i = (a); i < (b); ++i)
#define per(i, a, b) for(int i = (b) - 1; i >= (a); --i)
#define sz(x) (int)x.size()
#define de(a) cout << #a << " = " << a << endl
#define dd(a) cout << #a << " = " << a << " "
#define all(a) a.begin(), a.end()
#define pw(a) (1ll<<(a))
#define endl "\n"
typedef long long ll;
typedef double db;
typedef pair<int, int> pii;
typedef vector<int> vi;
//²¢²é¼¯
//int f[];
//int Find(int x){x==f[x]?return f[x]:f[x]=Find(f[x]);}
//int join(int x,int y){if(Find(x)!=Find(y))f[Find(x)]=Find(y);}
//¿ìËÙÃÝ
int qpow(ll a,ll b,ll m){ll c=1;while(b){if(b&1)c=c*a%m;b>>=1;a=a*a%m;}return c;}
ll a[100005];
int main(){
    ios::sync_with_stdio(false);
	ll n,m,k,t=0,d=0,cnt=0;
	cin>>n>>m>>k;
	rep(i,0,m){
		cin>>a[i];
	}
	ll i=0;
	while(i<m){
		if(a[i]-d>k){
			if(t==0){
				d+=((a[i]-d)/k)*k+((a[i]-d)%k==0?-k:0);
			}else{
				cnt++;
				d+=t;
				t=0;
			}
		}else{
			t++;
			i++;
		}
	}
	if(t!=0)
		cnt++;
	cout<<cnt;
    return 0;
}