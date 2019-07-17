#include <bits/stdc++.h>
using namespace std;
const int N = 100001;

long long int n,k,p[N];
int m;

pair <long long int,long long int> limits(long long int kk){
	long long int ll = (kk+k-1)/k;
	long long int rr = ll * k;
	ll = rr - k + 1;
	return make_pair(ll,rr);
}
int main() {
	
	scanf("%lld%d%lld",&n,&m,&k);
	for(int i = 1;i<=n;i++){
		scanf("%lld",&p[i]);
	}
	int ans = 0,tot = 0;
	for(int i = 1;i<=m;i++){
		long long int rp = p[i] - tot;
		pair<long long int ,long long int> limit= limits(rp);
		long long int lf = limit.first,rg = limit.second;
		int l = i+1,r = m,res = i;
		int lll = l,rrr= r;
		while(l <= r){
			int md = (l+r)/2;
			if(p[md] - tot <= rg){
				res = md;
				l = md + 1;
			}else{
				r = md - 1;
			}
			if(lll == l && rrr == r){
				break;
			}
			lll = l,rrr = r;
		}
		tot += res - i + 1;
		i = res;
		ans++;
	}
	cout<<ans;
	return 0;
}