#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
#define VI vector<int>
#define LL long long
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
using namespace std;
int b, s, c;
char burger[110];
int pb, ps, pc;
int B, S, C;
bool can(LL burgers, LL money){
	if(burgers == 0LL) return true;
	LL rB = max(B*burgers - b, 0LL), rC = max(C*burgers - c, 0LL), rS = max(S*burgers - s, 0LL); 
	LL cost = rB*pb + rS*ps + rC*pc;
	return cost <= money;
}	
int main(){
	scanf("%s", burger);
	scanf("%d %d %d", &b, &s, &c);
	scanf("%d %d %d", &pb, &ps, &pc);
	B = S = C = 0;
	int n = strlen(burger);
	for(int i = 0; i < n; i++){
		if(burger[i]=='B') B++;
		else if(burger[i] == 'S') S++;
		else C++;
	}
	LL burgers = 0LL;
	while(b >= B && s >= S && c >= C){
		burgers++;
		b -= B; s -= S; c -= C;
	}
	LL money;
	scanf("%lld", &money);
	LL lo = 0LL, hi = 100000000000000LL, mid;
	while(lo <= hi){
		mid = (lo + hi) >> 1LL;
		if(can(mid, money)) lo = mid + 1;
		else hi = mid - 1;
	}
	printf("%lld\n", burgers + hi);
	return 0;
}