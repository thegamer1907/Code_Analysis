#include<stdio.h>
#include<algorithm>
using namespace std;
const int maxm = 100005;
int main()
{
	int a, b, c, t1, t2, t, sum = 0;
	scanf("%d%d%d%d%d", &a, &b, &c, &t1, &t2);
	if (t1 > t2)
		t = t1, t1 = t2, t2 = t;
	for (int i = t1 * 5;i < t2 * 5;i++)
	{
		if (i == b) sum++;
		if (i == c) sum++;
	}
	if (c == t2 * 5 || (b == t2 * 5 && c == 0)) sum++;
	for (int i = t1;i < t2;i++)
		if (i == a) sum++;
	if (a == t2&&b == 0 && c == 0) sum++;
	if (sum == 3 || sum == 0) printf("YES\n");
	else printf("NO\n");
	return 0;
}