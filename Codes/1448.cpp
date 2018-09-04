#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
const int INF=2000000000;
long long a[100005];
vector<long long> v;
int main(){
	int n,s;
	scanf("%d%d",&n,&s);
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
	long long l=0,r=n;
	while(l<r){
		long long m=(l+r+1)/2;
		for(int i=1;i<=n;i++){
			v.push_back(a[i]+m*i);
		}
		sort(v.begin(),v.end());
		long long sum=0;
		for(int i=0;i<m;i++) sum+=v[i];
		if(sum<=s) l=m;
		else r=m-1;
		v.clear();
	}
	printf("%lld ",l);
	long long sum=0;
	for(int i=1;i<=n;i++){
		v.push_back(a[i]+l*i);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<l;i++) sum+=v[i];
	printf("%lld\n",sum);
	return 0;
}