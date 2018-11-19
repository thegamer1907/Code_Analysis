#include <bits/stdc++.h>

using namespace std;

#define TASK "b"

#define REP(i, a, b) for(i = (a); i < (b); i++)
#define FORU(i, a, b) for(i = (a); i <= (b); i++)
#define FORD(i, a, b) for(i = (a); i >= (b); i--)
#define IT(t, i, v) for(vector<t>::iterator i = (v).begin(); i != (v).end(); i++)

typedef pair<double, int> ii;
typedef pair<int, ii> iii;

int h, m, s;
int tt, ts;
int i, j;

ii a[10];

main(){
	#ifndef ONLINE_JUDGE
	freopen(TASK".inp","r",stdin);
	freopen(TASK".out","w",stdout);
	#endif
	scanf("%d%d%d", &h, &m, &s);
	a[0] = ii((h+0.5) / 12.0, 0);
	a[1] = ii((m+0.5) / 60.0, 0);
	a[2] = ii((s+0.5) / 60.0, 0);
	scanf("%d%d", &ts, &tt);
	a[3] = ii(ts / 12.0, 1);
	a[4] = ii(tt / 12.0, 1);
	sort(a, a+5);
	FORU(i, 0, 4){
		if(!a[i].second) continue;
		j = (i + 1) % 5;
		if(!a[j].second) continue;
		printf("YES");
		return 0;
	}
	printf("NO");
}