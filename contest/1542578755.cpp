#include <bits/stdc++.h>
#define MAXN 100010
using namespace std;

int main(){
	int h, m, s, t1, t2, rel[13];
	memset(rel, 0, sizeof rel);
	cin >> h >> m >> s >> t1 >> t2;

	rel[h%12] = 1; if (m > 0 || s > 0) rel[h%12] = 0, rel[(h+1)%12] = 1;
	// printf("horas = %d\n", (h+1)%12);

	int add = m%5 > 0 ? 1 : 0;
	if (s > 0 && add == 0) add = 1;
	rel[((m/5)+add)%12] = 1;
	// printf("mins = %d\n", (m/5)+add);


	add = s%5 > 0 ? 1 : 0;
	rel[((s/5)+add)%12] = 1;
	// printf("secs = %d\n", (s/5)+add);

	rel[t2%12] += 2;
	for (int i=1; i<14; i++){
		// printf("%d %d\n", rel[(t1+i)%12], (t1+i)%12);
		if (rel[(t1+i)%12] & 1) break;

		if (rel[(t1+i)%12] == 2){
			printf("YES\n");
			return 0;
		}
	}
	// printf("\nHora do t2!\n");
	rel[t2%12] -= 2;
	rel[t1%12] += 2;

	for (int i=1; i<14; i++){
		// printf("%d %d\n", rel[(t2+i)%12], (t2+i)%12);
		if (rel[(t2+i)%12] & 1) break;

		if (rel[(t2+i)%12] == 2){
			printf("YES\n");
			return 0;
		}
	}

	printf("NO\n");

	return 0;
}