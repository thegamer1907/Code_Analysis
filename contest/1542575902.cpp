#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <functional>
#include <set>
#include <queue>
#include <string>
#include <map>
#include <sstream>


int N(int t)
{
	t++;
	if (t > 12 * 60 * 60)
		return t % (12 * 60 * 60);
	return t;
}

int prev(int t)
{
	t--;
	if (t == 0)
		return 12 * 60 * 60;
	return t;
}

int ABS(int t)
{
	if (t > 12 * 60 * 60)
		return t % (12 * 60 * 60);
	return t;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int h, m, s, t1, t2;
	std::cin >> h >> m >> s >> t1 >> t2;
	h = ABS(h * 60 * 60 + m * 60 + s);
	if (m == 0)
		m = 60;
	m = ABS(m * 60 * 12 + s * 12);
	if (s == 0)
		s = 60;
	s = ABS(s * 60 * 60 / 5);
	t1 *= 60 * 60;
	t2 *= 60 * 60;

	int mem_T = t1;
	while (true)
	{
		if (mem_T == t2)
		{
			std::cout << "YES";
			return 0;
		}
		if (mem_T == h || mem_T == m || mem_T == s)
			break;
		mem_T = N(mem_T);
	}

	mem_T = t1;
	while (true)
	{
		if (mem_T == t2)
		{
			std::cout << "YES";
			return 0;
		}
		if (mem_T == h || mem_T == m || mem_T == s)
			break;
		mem_T = prev(mem_T);
	}

	std::cout << "NO";
}