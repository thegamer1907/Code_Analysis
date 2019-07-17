#include <cstdio>
using namespace std;
typedef long long ll;
ll n,k;
int m;
ll p[100005];
int main(){
	scanf("%lld%d%lld",&n,&m,&k);
	for(int i=0;i<m;++i)
		scanf("%lld",&p[i]);
	int i=0;
	ll ans=0;
	ll kn=k;
	while(i<m){
		++ans;
		if(p[i]>kn){
			int x=(p[i]-kn+k-1)/k;
			kn+=k*x;
		}
		int s=0;
		while(p[i]<=kn&&i<m){
			++i;++s;
		}
		kn+=s;
	}
	printf("%lld\n",ans);
	return 0;
}