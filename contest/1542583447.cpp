#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<queue>
#include<algorithm>
#include<cmath>
using namespace std;
char ch[3],a[300];
int main()
{
	int h, m, s, t1, t2,temp,f1=0,f2=0;
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	if (t1 > t2) { temp = t1; t1 = t2; t2 = temp; }

	if (h >= t1&&h < t2)f1 = 1;
	else f2 = 1;
	if (m / 5 >= t1&&m / 5 < t2)f1 = 1;
	else f2 = 1;
	if (s / 5 >= t1&&s / 5 < t2)f1 = 1;
	else f2 = 1;
	if (f1 == 0 || f2 == 0)printf("YES\n");
	else printf("NO\n");
	return 0;
}