#include <stdio.h>
#include <cstring>
#include <cmath>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <bitset>
#include <utility>
#include <sstream>
#include <iostream>
#include <algorithm>
#define rep(i,a,n) for(int i=a;i<n;++i)
#define per(i,a,n) for(int i=(n)-1;i>=a;--i)
#define foredge(u,i) for(int i=head[u];~i;i=l[i].nxt)
#define mem(a,x) memset(a,x,sizeof(a))
#define LOG(a) cout<<'#'<<a<<endl
void print_array(int *a,int n){printf("#");for(int i=0;i<n;i++) printf("%d%c",a[i],i==n-1?'\n':' ');}
typedef long long ll;
using namespace std;
typedef vector<int> vec;
typedef vector<vec> mat;
typedef pair<int,int> pii;
const double EPS=1e-8;
const ll INF=0x3f3f3f3f3f3f3f3f;

const int sz=2e5+9;

ll n,m,k;
ll a[sz];
int solve(){
	int p=0;
	ll dif=0;
	ll cnt=0;
	while(true){
		dif=dif+(a[p]-1-dif)/k*k;
		int np=lower_bound(a+p,a+m,dif+k+1)-a;
		// LOG(dif<<','<<np);
		dif=dif+np-p;
		cnt++;
		p=np;
		if(p==m) break;
	}
	return cnt;
}
int main(){
	cin>>n>>m>>k;
	rep(i,0,m) scanf("%I64d",&a[i]);
	int ans=solve();
	cout<<ans<<endl;
	return 0;
}