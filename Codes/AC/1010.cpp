#include<bits/stdc++.h>
using namespace std;
#define test() int t;scanf("%d",&t);for(int tno=1;tno<=t;tno++)
#define mp make_pair
#define pb push_back
#define wl(n) while(n--)
#define fi first
#define se second
#define all(c) c.begin(),c.end()
typedef long long ll;
typedef unsigned long long llu;
typedef vector<int> vi; 
typedef pair<int,int> pii;
typedef pair<int,pair<int,int> > piii ;
typedef pair<ll,ll> pll;
typedef pair<ll,int> pli;
#define sz(a) int((a).size())
#define ini(a,v) memset(a,v,sizeof(a))
#define sc(x) scanf("%d",&x)
#define sc2(x,y) scanf("%d%d",&x,&y)
#define sc3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define scl(x) scanf("%lld",&x)
#define scl2(x,y) scanf("%lld%lld",&x,&y)
#define scl3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define scs(s) scanf("%s",s);
#define gcd __gcd
#define debug() printf("here\n") 
#define chk(a) cerr << endl << #a << " : " << a << endl
#define chk2(a,b) cerr << endl << #a << " : " << a << "\t" << #b << " : " << b << endl
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
#define MOD 1000000007
#define inf ((1<<29)-1)
#define linf ((1LL<<60)-1)
const double eps = 1e-9;
//-----------------------------------------------------------------------------------------------

const int MAX = 200009;

int a[MAX]={0};
int b[MAX];
int main()
{
	int i,j;
	int n,k;
	sc2(n,k);
	string s;
	cin>>s;
	s = '_' + s;
	for(i=1;i<=n;i++){
		a[i] = a[i-1] + (s[i]=='a');
		b[i] = b[i-1] + (s[i]=='b');
	}
	int ans = 0;
	for(i=1;i<=n;i++){
		int x = upper_bound(a+1,a+n+1,a[i]+k-(s[i]=='a')) - (a+i);
		int y = upper_bound(b+1,b+n+1,b[i]+k-(s[i]=='b')) - (b+i);
		//chk(i);chk2(x,y);
		ans = max(ans,max(x,y));
	}
	printf("%d\n",ans);
	return 0;
}