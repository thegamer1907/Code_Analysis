
#include<iostream>
#include<algorithm>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <map>
using namespace std;
const int MAXN = 100000;
long long a[MAXN], dp[MAXN];
long long n,x,y = 0,k, z , t, m, d,  c, mod = 1e9+7;
string h, s, l;
vector <long long> v;
map<string,bool> mark;
//pair <long long, long long>pr[MAXN];
char g;
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		mark[s] = true;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> s;
		if (mark[s])
		{
			x++;
		}
	}
	if (x % 2)
	{
		if (n >= m)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
	else
	{
		if (n > m)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
}

