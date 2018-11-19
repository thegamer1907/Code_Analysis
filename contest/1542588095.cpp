#include<bits/stdc++.h>
using namespace std;
int h, m, s, t1, t2, pos1, pos2, poss, posm, posh;
bool bet(int x) {
	return pos1 <= x && pos2 >= x;
}

bool out(int x) {
	return x < pos1 || x > pos2;
}

int main() {
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	posh = 1 * h * 3600 + m * 60 + 1 * s;
	if(posh > 12 * 3600) posh -= 12 * 3600;
	posm = 1 * m * 12 * 60 + s * 12;
	if(posm > 12 * 3600) posm -= 12 * 3600;
	poss = 1 * s * 12 * 60;
	t1 %= 12;
	t2 %= 12;
	pos1 = 1 * t1 * 3600;
	pos2 = 1 * t2 * 3600;
//	printf("%d %d %d %d %d\n", posh, posm, poss, pos1, pos2);
	if(pos1 > pos2) swap(pos1, pos2);
	if(bet(posh) && bet(posm) && bet(poss)) {
		printf("YES"); return 0;	
	} 
	if(out(posh) && out(posm) && out(poss)) {
		printf("YES");return 0;
	}
	printf("NO");
}