
// PREPARE TO FLY!!!
// BLUE KALECGOS, COMBAT!!!

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <stack>
#include <complex>
using namespace std;

#define N (1<<17)
#define MODULO (1000000007)

#define INFLL (12345678987654321LL)

int n, k, ML, MR;
int a[N];
long long dpa[N], dpb[N], T[N];
long long cur;

void RecSolve(int L, int R, int X, int Y)
{
	if (X > Y)
	{
		return;
	}
	int Md = (X + Y) >> 1;
	int st = min(R, Md);
	int pt = -1;
	long long mmn = INFLL;
	while (MR < Md)
	{
		MR++;
		cur += T[a[MR]];
		T[a[MR]]++;
	}
	while (ML > st + 1)
	{
		ML--;
		cur += T[a[ML]];
		T[a[ML]]++;
	}
	while (MR > Md)
	{
		T[a[MR]]--;
		cur -= T[a[MR]];
		MR--;
	}
	while (ML < st + 1)
	{
		T[a[ML]]--;
		cur -= T[a[ML]];
		ML++;
	}
	for (int i = st;i >= L;i--)
	{
		ML--;
		cur += T[a[ML]];
		T[a[ML]]++;
		if (cur + dpa[i - 1] < mmn)
		{
			mmn = cur + dpa[i - 1];
			pt = i;
		}
	}
	dpb[Md] = mmn;
	RecSolve(L, pt, X, Md - 1);
	RecSolve(pt, R, Md + 1, Y);
}

int main()
{
	// WELL, THERE IT IS.

	scanf("%d%d", &n, &k);
	for (int i = 1;i <= n;i++)
	{
		scanf("%d", &a[i]);
		dpa[i] = INFLL;
	}
	dpa[0] = 0LL;
	for (int kk = 0;kk < k;kk++)
	{
		ML = 1, MR = 0, cur = 0LL;
		memset(T, 0, sizeof(T));
		RecSolve(kk + 1, n, kk + 1, n);
		memcpy(dpa, dpb, sizeof(dpa));
	}
	printf("%I64d\n", dpa[n]);

	// I'M NOT AFRAID!
	//system("pause");
}
