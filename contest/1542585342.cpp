#include<bits/stdc++.h>
using namespace std;
typedef double intd;
const intd pi = acos(-1.0);

intd a[5];

int poss(intd p) {
	if(p > a[0] && p < a[1]) return 1;
	else if(p > a[1] && p < a[2]) return 2;
	else return 3;
}

int main() {
	intd h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	a[0] = 6.0 * s;
	a[1] = 6.0 * m + s / 10.0;
	a[2] = 30.0 * h + m / 2.0 + s / 120.0;
	sort(a, a+3);
	
	int p1 = poss(t1 * 30.0);
	int p2 = poss(t2 * 30.0);
	puts(p1==p2?"YES":"NO");
}