//#include "stdafx.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;
//
//char str[5];
//bool fr(false), ls(false);
//int main()
//{
//	cin >> str;
//	int n;
//	cin >> n;
//	for (int i(0); i != n; ++i)
//	{
//		char s[5];
//		cin >> s;
//		if (s[1] == str[0])
//		{
//			fr = true;
//		}
//		if (s[0] == str[1])
//		{
//			ls = true;
//		}
//	}
//	if (fr && ls)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

int main()
{
	double tm[5];
	double perh = 360 / 12, perm = 360 / 60, pers = 360 / 60;
	cin >> tm[0] >> tm[1] >> tm[2] >> tm[3] >> tm[4];
	tm[0] = tm[0] * perh + tm[1] / 60 * perh + tm[2] / 60 / 60 * perh;
	tm[1] = tm[1] * perm + tm[2] / 60 * perm;
	tm[2] = tm[2] * pers;
	tm[3] *= perh;
	tm[4] *= perh;
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << tm[i] << endl;
	//}
	double beg(tm[3]), end(tm[4]);
	sort(tm, tm + 5);
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << tm[i] << endl;
	//}
	
	int b, e;
	for (int i(0); i < 5; ++i)
	{
		if (beg == tm[i]) b = i;
		if (end == tm[i]) e = i;
	}

	//printf("%d %d\n", b, e);
	
	if (abs(b - e) == 1 || abs(b - e) == 4)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	//system("pause");
	return 0;
}
