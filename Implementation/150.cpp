#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <ctime>
#include <time.h>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <limits>
#include <string>
#include <set>
#include <math.h>
#include <map>

using namespace std;

typedef long long ll;
typedef double dl;

ll sign(ll a)
{
	if(a > 0)
		return 1;
	if(a == 0)
		return 0;

	return -1;
}

bool proc()
{
	ll n;
	if(scanf("%I64d", &n) != 1)
		return 0;


	ll a, b;
	scanf("%I64d%I64d", &a, &b);

	a += (n - 1);
	b += (n - 1);

	ll cnt = 0;
	while(a != b)
	{
		if(a % 2 == 0)
			a /= 2;
		else
			a = (a - 1) / 2;


		if(b % 2 == 0)
			b /= 2;
		else
			b = (b - 1) / 2;

		cnt += 1;
	}

	
	if(a == 1 && b == 1)
	{
		puts("Final!");
	}
	else
		printf("%I64d\n", cnt);
	return 1;
}

int main()
{
	//freopen("inputC.txt", "r", stdin);
	//freopen("outputC.txt", "w", stdout);
	
	while(proc());

	return 0;
}
/*
4 1 2

8 2 6

8 7 5

*/
