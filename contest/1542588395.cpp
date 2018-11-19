#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <queue>
using namespace std;

bool first = false;
bool second = false;

bool check()
{
	if (first && second)
	{
		return true;
	}
	return false;
}

int main()
{
	string tar;
	cin >> tar;
	int n;
	cin >> n;
	string retar = tar;
	reverse(retar.begin(), retar.end());
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s == tar || s == retar)
		{
			first = true;
			second = true;
			break;
		}
		else if (s[1] == tar[0])
		{
			first = true;
		}
		else if (s[0] == tar[1])
		{
			second = true;
		}
	}
	printf("%s\n", check() ? "YES" : "NO");
	return 0;
}