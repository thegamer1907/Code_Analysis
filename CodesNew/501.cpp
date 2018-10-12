#include<bits/stdc++.h>

#define x first
#define y second
#define pb push_back
#define mp make_pair
#define up_b upper_bound
#define low_b lower_bound
#define sz(x) (int)x.size()
#define all(v) v.begin(),v.end()
#define boost ios_base::sync_with_stdio(0),cin.tie(0),cout.tie()

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<int,ll> pil;
typedef pair<ll,int> pli;
typedef pair<ll,ll> pll;

const ll INF = 1e18;
const int inf = INT_MAX;
const ll mod = 1e9 + 7;
const int pi = acos(-1);
const int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1};
const int dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};
const int N = 1e6 + 5;
const int M=1e7+1;

int cnt[M],x[N];
int p[M];
bool used[M];

int main(){
	boost;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i];
		cnt[x[i]]++;
	}
	vector<int>v;
	int cur=0;
	for(int i=2;i<M;i++){
		if(used[i])continue;
		//cout<<i<<" ";
		v.pb(i);
		for(int j=i;j<M;j+=i){
			used[j]=1;
			p[sz(v)]+=cnt[j];
		}
		p[sz(v)]+=p[sz(v)-1];
	}
	int m;
	cin>>m;
	while(m--){
		int l,r;
		cin>>l>>r;
		int L=low_b(all(v),l)-v.begin();
		int R=up_b(all(v),r)-v.begin();
		cout<<p[R]-p[L]<<endl;
	}
}