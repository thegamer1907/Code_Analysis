#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define MAX(a,b) a > b ? a : b
#define MIN(a,b) a < b ? a : b
//#define scanf scanf_s

using namespace std;


int main()
{
	double a[5];
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	if (a[0] == 12)a[0] = 0;
	a[0] = (a[0] * 5 + a[1] /(double) 60 + a[2] /(double) 3600);
	if (a[1] == 60)a[1] = 0;
	//a[1] *= 60;
	a[1] += a[2] / (double)60;
	if (a[3] == 12)a[3] = 0;
	if (a[4] == 12)a[4] = 0;
	a[3] *= 5;
	a[4] *= 5;
	int re1 = a[3], re2 = a[4];
	sort(a, a + 5);
	for (int i(0); i < 4; ++i)
	{
		if ((re1 == a[i] && re2 == a[i + 1]) || (re1 == a[i + 1] && re2 == a[i]))
		{
			printf("YES\n");
			return 0;
		}
	}
	if ((re1 == a[4] && re2 == a[0]) || (re1 == a[0] && re2 == a[4]))
	{
		printf("YES\n");
		return 0;
	}
	printf("NO\n");
	//system("pause");
	return 0;
}
