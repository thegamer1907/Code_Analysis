#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair

int qs,qb,qc;
int ns,nc,nb,ps,pc,pb;
long long r;

bool f(long long x){
	long long c = qs * x * ps + qc * x * pc + qb * x * pb;
	c -= min(qs * x * ps, (long long)ns * ps);
	c -= min(qc * x * pc, (long long)nc * pc);
	c -= min(qb * x * pb, (long long)nb * pb);
	return c <= r;
}

int main(){
	int n;
	char s[105];
	scanf("%s",s);
	
	n = strlen(s);
	for(int i = 0; i < n; i++){
		if(s[i] == 'C') qc++;
		if(s[i] == 'S') qs++;
		if(s[i] == 'B') qb++;
	}
	scanf("%d %d %d",&nb,&ns,&nc);
	scanf("%d %d %d",&pb,&ps,&pc);
	scanf("%lld",&r);

	long long l = 0, r = 2000000000001;
	while(l+1 < r){
		long long mid = (l + r)/2;
		if(f(mid)) l = mid;
		else r = mid - 1;
	}

	if(f(r)) l = r;
	printf("%lld\n",l );
	return 0;
}
