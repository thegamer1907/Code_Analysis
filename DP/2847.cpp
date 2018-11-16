#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)
#define sz(x) (int)x.size()
#define de(x) cout<< #x<<" = "<<x<<endl
#define dd(x) cout<< #x<<" = "<<x<<" "
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

const int N=2020, P=1e9+7;
int n,k;
ll f[N][N];

void upd(ll &a, ll b) {
	a+=b;
	if(a>=P) a-=P;
}

int main() {
	while(~scanf("%d%d",&n,&k)) {
		memset(f,0,sizeof(f));
		rep(j,1,n+1) f[1][j]=1;
		rep(i,1,k) rep(j,1,n+1) {
			for(int c=j;c<=n;c+=j) upd(f[i+1][c], f[i][j]);
		}
		ll ans=0;
		rep(i,1,n+1) upd(ans, f[k][i]);
		printf("%lld\n",ans);
	}
	return 0;
}
