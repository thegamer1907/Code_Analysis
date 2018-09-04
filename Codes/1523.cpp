#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
#define PB push_back
#define FF first
#define SS second
const int N = 100000 + 5;

int n, s;
lld arr[N];
lld getSum(lld);

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>n>>s;
	for(int i=1;i<=n;i++) cin>>arr[i];
	int l = 0, r = n+1;
	while(r-l>1){
		int mid = (l+r)>>1;
		if(getSum(mid)<=s) l=mid;
		else r=mid;
	}
	cout<<l<<" "<<getSum(l)<<'\n';
	return 0;
}

lld getSum(lld k){
	vector<lld> vv;
	for(int i=1;i<=n;i++) vv.PB(arr[i]+i*k);
	sort(vv.begin(), vv.end());
	lld ret = 0;
	for(int i=0;i<k;i++) ret += vv[i];
	return ret;
}