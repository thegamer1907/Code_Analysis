#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define fir first
#define se second
const int maxn = 2e5+5;
typedef pair<LL,LL> pll;
typedef pair<double,double> pdd;
pdd num[1010];
LL n,rr,m;

LL get(LL x) {
	LL sum = 0;
	for(LL i = 1;i <= m;i++) {
		sum += min(x/i,(LL)n);
	}
	return sum;
}



int main() {
	cin>>n>>m;
	if(n > m) swap(n,m);
	LL k;
	cin>>k;
	LL l = 0,r = n*m+1;
	while(l+1 < r) {
		LL m = (l+r)>>1;
		if(get(m) >= k) r = m;
		else l = m;
	}
	if(get(l) < k) l++;
	cout<<l<<endl;
}
