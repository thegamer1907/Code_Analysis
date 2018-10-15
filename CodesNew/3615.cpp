#include<bits/stdc++.h>
#define pb push_back
#define MID(a,b) ((a+b)>>1)
#define LL(a) (a<<1)
#define RR(a) (a<<1|1)
using namespace std;
typedef long long ll;
typedef pair<int, int>pii;
typedef pair<double, int> pdi;
typedef pair<ll,int>pli;
typedef pair<ll,ll>pll;
typedef pair<string,int>psi;
const int N = 5005,M=100005;
const int inf=0x3f3f3f3f;
const ll INF=1000000000000000000ll;
const ll mod = 998244353;
const double pi=acos(-1.0);
const double eps=1e-6;

int a[105];

int main(){
	int maxi=-1, n, m;
	scanf("%d%d",&n,&m);
	for(int i=1; i<=n; i++){
		scanf("%d", &a[i]);
		maxi = max(maxi, a[i]);
	}
	int ans2 = maxi + m;
	int sub = 0;
	for(int i=1; i<=n; i++){
		sub += (maxi - a[i]);
	}
	int rest = m - sub, ans1;
	if(rest <= 0) ans1 = maxi;
	else{
		int k = rest / n;
		int kk = n*k==rest?0:1;
		ans1 = maxi + k + kk;
	}
	printf("%d %d\n", ans1, ans2);
}   