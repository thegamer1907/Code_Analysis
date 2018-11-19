#include <bits/stdc++.h>

using namespace std;

#define debug(args...) fprintf(stderr,args)
#define pb push_back

const int N = 1e5 + 5;
const int inf = 1791791791;

int main() {
	int h, m, s, t1, t2;
	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
	int count = 0;
	if (t1 > t2) swap(t1, t2);
	if (h >= t1 && h < t2) count++;
	int p = m/5;
	if (p == 0) p == 12;
	if (p >= t1 && p < t2) count++;
	p = s/5;
	if (p == 0) p = 12;
	if (p >= t1 && p < t2) count++;
	if (count == 3 || count == 0) printf("YES\n");	
	else printf("NO\n");
    return 0;
}

