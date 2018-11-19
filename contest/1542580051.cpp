#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string str;
string s[112];
bool fr(false), ls(false);
int main()
{
	cin >> str;
	int n;
	cin >> n;
	for (int i(1); i <= n; ++i)
	{
		cin >> s[i];
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			string psw = s[i] + s[j];
			for (int k = 0; k <= 1; k++)
			{
				if (str == psw.substr(k, 2))
				{
					printf("YES\n");
					return 0;
				}
			}
		}
	}
	printf("NO\n");
	return 0;
}

//int main()
//{
//	double tm[5];
//	double perh = 360 / 12, perm = 360 / 60, pers = 360 / 60;
//	cin >> tm[0] >> tm[1] >> tm[2] >> tm[3] >> tm[4];
//	tm[0] = tm[0] * perh + tm[1] / 60 * perh + tm[2] / 60 / 60 * perh;
//	tm[1] = tm[1] * perm + tm[2] / 60 * perm;
//	tm[2] = tm[2] * pers;
//	tm[3] *= perh;
//	tm[4] *= perh;
//	double beg(tm[3]), end(tm[4]);
//	sort(tm, tm + 5);
//	
//	int b, e;
//	for (int i(0); i < 5; ++i)
//	{
//		if (beg == tm[i]) b = i;
//		if (end == tm[i]) e = i;
//	}
//	
//	if (abs(b - e) == 1 || abs(b - e) == 4)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}
