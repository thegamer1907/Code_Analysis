#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, k;
	int m;
	vector<long long> p;

	scanf("%lld%d%lld",&n,&m,&k);
	p.resize(m);
	for(int i=0;i<m;i++) scanf("%lld",&p[i]);

	long long x = 1;
	long long nowm = k;
	int ans = 0;

	for(int i=0;i<m;i++){
		if(!(x <= p[i] && p[i] < x + nowm)){
			if(nowm != k) {x += nowm; nowm = k; i--; continue;}
			long long cnt = (p[i] - x) % k;
			x += k * cnt;
			i--;
			continue;
		}
		int j;
		for(j=i;j<m && p[j]<x+nowm;j++);
		long long cnt = j - i;
		x += nowm;
		nowm = cnt;
		i = j - 1;
		ans++;
	}
	printf("%d\n",ans);

	return 0;
}