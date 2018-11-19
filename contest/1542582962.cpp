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

int status[100];

int main()
{
	std::ios::sync_with_stdio(false);
	int n, s;
	cin >> n >> s;
	while (n--)
	{
		int st = 0;
		int tmp;
		for (int i = 0;i < s;i++)
		{
			cin >> tmp;
			st |= (tmp << i);
		}
		status[st] = 1;
	}
	int ok = 0;

	for (int i = 0;i < (1 << s);i++)
	{
		for (int j = 0;j < (1 << s);j++)
		{
			if ((i&j) == 0 && status[i]&&status[j])
			{
				ok = 1;
			}
		}
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