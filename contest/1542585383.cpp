/*
*/

#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
	int h, m, s, t1, t2;
	int H[12] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22};
	int M[60] = {0, 1, 1, 1, 1, 2, 3, 3, 3, 3, 4, 5, 5, 5, 5, 6, 7, 7, 7, 7, 8,
				9, 9, 9, 9, 10, 11, 11, 11, 11, 12, 13, 13, 13, 13, 14, 15, 15, 15, 15, 16,
				17, 17, 17, 17, 18, 19, 19, 19, 19, 20, 21, 21, 21, 21, 22, 23, 23, 23, 23,};
	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
	if(h == 12) h = 0;
	int posh = H[h];
	int posm = M[m];
	int poss = M[s];
	int tmps = m*60 + s;
	if(tmps) posh++;
	if(s && m%5==0) posm++;
	// printf("%d %d %d\n", posh, posm, poss);
	if(t1 == 12) t1 = 0;
	if(t2 == 12) t2 = 0;
	if(t1 > t2) swap(t1, t2);
	bool ok = true;
	for(int i=t1*2; i<=t2*2 && ok; ++i) {
		if(i==posh || i==posm || i==poss)
			ok = false;
	}
	if(ok) printf("YES\n");
	else {
		ok = true;
		for(int i=t1*2; i>=0 && ok; --i) {
			if(i==posh || i==posm || i==poss)
				ok = false;
		}
		for(int i=23; i>=t2*2 && ok; --i) {
			if(i==posh || i==posm || i==poss)
				ok = false;
		}
		if(ok) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}