#include <bits/stdc++.h>

using namespace std;
#define INF 1000000000000000LL
typedef long long int ll;

ll qtdB, qtdS, qtdC, nb, ns, nc, pb, ps, pc, r;

bool ok(ll x){
	ll b, s, c;
	b = max(x * qtdB - nb, 0LL);
	s = max(x * qtdS - ns, 0LL);
	c = max(x * qtdC - nc, 0LL);
	
	return b*pb + s*ps + c*pc <= r;
}

int main(){
	string s;
	cin >> s;
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;
	
	for (int i = 0; i < (int)s.size(); i++)
	{
		if(s[i]=='B') qtdB++;
		if(s[i]=='S') qtdS++;
		if(s[i]=='C') qtdC++;
	}
	
	ll lo = 0, hi = INF, mid;
	ll ans = 0LL;
	while (lo <= hi)
	{
		mid = (lo+hi)/2;
		if(ok(mid)){
			ans = max(ans, mid);
			lo = mid+1;
		}else{
			hi = mid-1;
		}
	}
	cout << ans << "\n";
	
	
	return 0;
}
