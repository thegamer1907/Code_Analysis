#include <cstdio>
#include <cstring>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;

int main () {
	int a, b, c, t1, t2;
	scanf("%d%d%d%d%d", &a, &b, &c, &t1, &t2);
	int total = 12*3600;
	a = a%12*5*60*60+b*60+c, t1 = t1%12*5*60*60, t2 = t2%12*5*60*60;
	b = b*60*60+c*60, c = c*60*60;
	bool sol = false, flg = false;;
	for(int i = t1; ; i=(i+1)%(60*60*60)) {
		if(i == a|| i == b || i == c) break;
		if(i == t2) {sol = true; break;}
		if(i == t1) {if(flg) break; else flg = true;}
	}
	flg = false;
	for(int i = t1; ; i=(i-1+(60*60*60))%(60*60*60)) {
		//printf("at:%d\n", i);
		if(i == a|| i == b || i == c) break;
		if(i == t2) {sol = true; break;}
		if(i == t1) {if(flg) break; else flg = true;}
	}
	puts(sol?"YES":"NO");
}
/*
12 0 1 12 1
*/
