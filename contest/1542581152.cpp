#include <bits/stdc++.h>
using namespace std;

int main(){
	int h, m, s, t1, t2;
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	h*=3600;
	t1*=3600;
	t2*=3600;

	m *= 60;
	m += s;
	h += m;
	m -= s;
	m/=60;

	m *= 720;
	s *= 12;
	m += s;
	s /= 12;

	s*= 720;

	int tt = t1, pv = t1;
	bool ok = 1;

	// printf("h m s = %d %d %d t1 = %d t2 = %d\n", h, m, s, t1, t2);

	for(int i=0;i<43200;i++){
		pv = tt;
		tt++;
		if((pv <= h && h <= tt) || (pv <= h+43200 && h+43200 <= tt)){
			// printf("h = %d pv tt = %d %d\n", h, pv, tt);
			ok = 0;
			break;
		}
		if( (pv <= m && m <= tt) || (pv <= m+43200 && m+43200 <= tt)){
			// printf("m = %d pv tt = %d %d\n", m, pv, tt);
			ok = 0;
			break;
		}
		if( (pv <= s && s <= tt) || (pv <= s+43200 && s+43200 <= tt)){
			// printf("s = %d pv tt = %d %d\n", s, pv, tt);
			ok = 0;
			break;
		}
		if(tt == t2 || tt == t2+43200){
			break;
		}
	}

	if(ok){
		printf("YES\n");
		return 0;
	}
	ok = 1;

	tt = t2, pv = t2;

	for(int i=0;i<43200;i++){
		pv = tt;
		tt++;
		if((pv <= h && h <= tt) || (pv <= h+43200 && h+43200 <= tt)){
			ok = 0;
			break;
		}
		if( (pv <= m && m <= tt) || (pv <= m+43200 && m+43200 <= tt)){
			ok = 0;
			break;
		}
		if( (pv <= s && s <= tt) || (pv <= s+43200 && s+43200 <= tt)){
			ok = 0;
			break;
		}
		if(tt == t1 || tt == t1+43200){
			break;
		}
	}

	if(ok) printf("YES\n");
	else printf("NO\n");
}