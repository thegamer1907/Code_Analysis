#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <queue>
#include <set>
#include <map>
using namespace std;
typedef long long LL;
const int inf = 1 << 30;
const LL INF = 1LL << 60;
const int MaxN = 1e5;

int H, M, S, t1, t2;
int l, r;
bool f1, f2, flag;
int clock[80];

void c() {
	memset(clock, 0, sizeof(clock));
	int h = (H % 12) * 5 + M / 12;
	//if(M % 12 != 0 || S != 0) h++;
	clock[h] = 1;

	int m = M;
	//if(S != 0) m++;
	clock[m] = 1;

	clock[S] = 1;
	/*
	for(int i = 0; i <= 59; i++)
		printf("%d ", clock[i]);
	printf("\n");
	*/
	for(int i = l; i <= r - 1; i++) {
		//if(i >= 60) i = i % 60;
		if(clock[i] == 1)
			f1 = 1;
	}
}

void cc() {
	memset(clock, 0, sizeof(clock));
	int h = (H % 12) * 5 + M / 12;
	//if(M % 12 != 0 || S != 0)
	//	h = (h - 1 + 60) % 60;
	clock[h] = 1;

	int m = M;
	//if(S != 0) m = (m - 1 + 60) % 60;
	clock[m] = 1;

	clock[S] = 1;
	/*
	for(int i = 0; i <= 59; i++)
		printf("%d ", clock[i]);
	printf("\n");
	*/
	for(int i = r; i <= l + 60 - 1; i++) {
		//if(i >= 60) i = i % 60;
		if(clock[i % 60] == 1)
			f2 = 1;
	}
}

int main()
{
	while(scanf("%d %d %d %d %d", &H, &M, &S, &t1, &t2) != EOF)
	{
		f1 = 0, f2 = 0;
		flag = 0;
		l = (t1 % 12) * 5;
		r = (t2 % 12) * 5;
		if(l > r) swap(l, r);
		//printf("l = %d r = %d\n", l, r);
		c();
		cc();
		//printf("f1 = %d f2 = %d\n", f1, f2);
		if(f1 && f2) flag = 1;
		if(flag == 1) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}