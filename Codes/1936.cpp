#include<cstdio>
#include<cstring>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
typedef long long ll;
const ll maxn=2e5+10;
map<ll,ll>num,cnt;

int main()
{
	ll n,m,i,j,k,x,y,z,ans;
	while ( scanf("%lld%lld",&n,&m)!=EOF ) {
		num.clear();
		cnt.clear();
		if ( m==1 ) {
			ans=0;
			set<int>s;
			for ( i=1;i<=n;i++ ) {
				scanf("%lld",&x);
				num[x]++;
				s.insert(x);
			}
			set<int>::iterator it;
			for ( it=s.begin();it!=s.end();it++ ) {
				x=*it;
				y=num[x];
				ans+=y*(y-1)*(y-2)/6;
			}
			printf("%lld\n",ans);
			continue;
		}
		ans=0;
		z=0;
		for ( i=1;i<=n;i++ ) {
			scanf("%lld",&x);
			num[x]++;
			if ( x%m==0 && x!=0 ) {
				cnt[x*m]+=num[x/m];
			}
			else if ( x==0 ) z++;
			ans+=cnt[x];
		}
		ans+=z*(z-1)*(z-2)/6;
		printf("%lld\n",ans);
	}
	return 0;
}