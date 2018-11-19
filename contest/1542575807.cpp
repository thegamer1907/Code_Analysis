#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<functional>
#include<queue>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<string>
#include<cmath>
#include<stack>
#include<set>
#include<map>
#include<vector>
#include<sstream>
#include<deque>
#include<time.h>
#include<bitset>
#define MAXN 100005
#define MAX 10000000
#define INF 0x3f3f3f3f
#define MOD 10000000
#define pi acos(-1)
#define eps 1e-4
#define e 2.718281828459
#define ln(i) log(i)/log(e)

using namespace std;
typedef long long ll;

int vis[25];
int main()
{
	int h, m, s, t, tt, t1, t2;
	cin >> h >> m >> s >> t >> tt;
	vis[h] = 1;
	vis[h + 12] = 1;
	vis[m / 5] = 1;
	vis[m / 5 + 12] = 1;
	vis[s / 5 + 12] = 1;
	vis[s / 5] = 1;
	bool flag = 1;
	t1 = t, t2 = tt;
	if (t1 > t2)
		swap(t1, t2);
	for (int i = t1 + 1; i < t2; i++)
	{
		if (vis[i])
		{
			flag = 0;
			break;
		}
	}
	if ((m != 0 || s != 0) && vis[t1])
		flag = 0;
	if (flag)
	{
		cout << "YES\n";
		return 0;
	}
	flag = 1;
	if (m == 0 && s == 0 && vis[t2])
		vis[t2] = 0;
	for (int i = t2; i < t1 + 12; i++)
	{
		if (vis[i])
		{
			flag = 0;
			break;
		}
	}
	if (flag)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}

	cin >> h;
	return 0;
}