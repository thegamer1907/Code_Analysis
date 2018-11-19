#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int clock[3], t1, t2;

int main()
{
	scanf("%d%d%d%d%d", &clock[0], &clock[1], &clock[2], &t1, &t2);
	clock[0] %= 12;
	t1 %= 12;
	t2 %= 12;
	clock[0] = clock[0] * 3600 + clock[1] * 60 + clock[2];
	clock[1] = (clock[1] * 60 + clock[2]) * 12;
	clock[2] = clock[2] * 60 * 12;
	t1 = t1 * 3600;
	t2 = t2 * 3600;
	sort(clock, clock + 3);
	if (t1 > t2) swap(t1, t2);
	if (t1 < clock[0] && t2 > clock[2])
	{
		puts("YES");
		return 0;
	}
	if (t1 > clock[0] && t1 < clock[1] && t2 > clock[0] && t2 < clock[1])
	{
		puts("YES");
		return 0;
	}
	if (t1 > clock[1] && t1 < clock[2] && t2 > clock[1] && t2 < clock[2])
	{
		puts("YES");
		return 0;
	}
	if ((t1 < clock[0] && t2 < clock[0]) || (t1 > clock[2] && t2 > clock[2]))
	{
		puts("YES");
		return 0;
	}
	puts("NO");
	return false;
}
