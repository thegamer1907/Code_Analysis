#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<vector>
#include<set>
#include<cmath>
#include<queue>
#include<ctime>
#include<sstream>

using namespace std;

double h, m, s;
int a, b;

int check(int a, double b)
{
	if (a <= b&&a + 1 >= b)
	{
		return 1;
	}
	return 0;
}


int main()
{
	cin >> h >> m >> s;
	if (h == 12)
	{
		h = 0;
	}
	m += s / 60;
	h += m / 60;

	m /= 5;
	s /= 5;

	cin >> a >> b;
	a %= 12;
	b %= 12;

	int ok = 0;
	int as = a;
	while (as != b)
	{
		if (check(as, h) || check(as, m) || check(as, s))
		{
			break;
		}
		as++;
		as %= 12;
	}
	if (as == b)
	{
		ok = 1;
	}

	as = a;
	while (as != b)
	{
		as--;
		as += 12;
		as %= 12;
		if (check(as, h) || check(as, m) || check(as, s))
		{
			as++;
			break;
		}
	}
	if (as == b)
	{
		ok = 1;
	}

	if (ok)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}

	return 0;
}