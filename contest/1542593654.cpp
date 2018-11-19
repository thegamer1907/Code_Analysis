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

int beg[26];
int endss[26];
string key;
string tmp;
int ok = 0;

int main()
{
	int n;
	cin >> key;
	cin >> n;
	while (n--)
	{
		cin >> tmp;
		if (tmp == key)
		{
			ok = 1;
		}
		beg[tmp[1] - 'a'] = 1;
		endss[tmp[0] - 'a'] = 1;
	}
	if (beg[key[0] - 'a'] && endss[key[1] - 'a'])
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