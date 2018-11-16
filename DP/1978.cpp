#include<bits/stdc++.h>
#define FOR(i,s,e) for(int i=(s);i<=(e);i++)
#define FORD(i,s,e) for(int i=(s);i>=(e);i--)
#define eb emplace_back
#define MAXN 1000009
#define MOD 1000000007
#define mp(x, y) make_pair(x,y)
#define all(v) (v).begin(),(v).end()
#define pb(x) push_back(x)
#define tr(ii,c) for(__typeof((c).begin()) ii=(c).begin();ii!=(c).end();ii++)
#define ff first
#define ss second

using namespace std;

typedef unsigned long long LLU;
typedef long double LD;
typedef pair<int,int> PII;
typedef vector<int> VI;
const bool print=false;
typedef long long ll;

template<class T>bool umin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
template<class T>bool umax(T& a,T b){if(a<b){a=b;return 1;}return 0;}

int const N = 1e5 + 9;


int n,m,k;

int a[MAXN],b[MAXN],c[MAXN];
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
map<int,int>M;
int solve(){
	scanf("%d%d",&n,&m);
	for(int i = 1; i <= n; i ++)
		scanf("%d", a + i);
	for(int i = n; i > 0; i --){
		M[a[i]] = 1;
		b[i] = M.size();
	}
	while(m --){
		int l;
		scanf("%d",&l);
		printf("%d\n",b[l]);
	}
//	cin >> n;

//	cout << ans << endl;
//	printf("%lld\n",ans);
}
void preprocess(){



}
int main()
{
//	FAST;
	preprocess();
	int t=1;
//    scanf("%d", &t);
//	cin >> t;
    while(t --){
    	solve();
	}
}




