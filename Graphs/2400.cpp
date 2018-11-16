#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef pair<int, int> pi;
const int mod = 1e9 + 7;
const double EPS = 1e-9;
const int INF = 1 << 29;
#define mp make_pair
#define el putchar('\n')
#define sp putchar(' ')
#define Fill(a,val) memset(a,val,sizeof a)
#define all(a) a.begin(),a.end()
#define tr(a, it) for (typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define in(n) scanf("%d",&n)
#define inl(n) scanf("%I64d",&n)
#define out(n) printf("%d",n);
#define outl(n) printf("%I64d",n);

int const NN = 2e5 + 4;
int p[2003];
int dp[2003];

int rec(int x){
	if(dp[x] != -1)
		return dp[x];
	return dp[x] = (p[x] == -1 ? 1 : 1 + rec(p[x]));
}

int main(){
	int n;cin>>n;
	for(int i=1;i<=n;++i){
		cin>>p[i];dp[i] = -1;
	}
	int ans = 1;
	for(int i=1;i<=n;++i){
		ans = max(ans, rec(i));
	}
	cout<<ans;el;
	return 0;
}
