#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define f(i, x, n) for(int i = x; i < (int)n; ++i)

bool bad[120];

inline void fix(int &x) { if (x == 12)x = 0; x *= 10; }
inline void win() { printf("YES\n"), exit(0); }

int main(){
	int h, m, s, t1, t2;
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	
	fix(h);
	fix(t1);
	fix(t2);
	m <<= 1;
	s <<= 1;
	
	if (s)++m;
	if (s || m)++h;
	
	bad[h] = true;
	bad[m] = true;
	bad[s] = true;
	
	int t = t1;
	while (true){
		if (++t == 120)t = 0;
		if (bad[t])break;
		if (t == t2)win();
	}
	
	t = t1;
	while (true){
		if (--t == -1)t = 119;
		if (bad[t])break;
		if (t == t2)win();
	}
	
	printf("NO\n");
}