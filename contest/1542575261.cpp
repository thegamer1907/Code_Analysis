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

set<int>st;
int p[20];
int q[20][5];
int main()
{
	int n, k;
	cin >> n >> k;
	int a;
	for (int i = 0; i < n; i++)
	{
		int tmp = 0;
		for (int j = 0; j < k; j++)
		{
			cin >> a;
			tmp = tmp * 2 + a;
		}
		st.insert(tmp);
	}
	int m = st.size();
	int cnt = 0;
	for (auto it : st)
	{
		int tmp = it;
		p[cnt++] = tmp;
	}
	int tt = p[0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < 4; j++)
		{		
			q[i][j] = p[i] % 2;;
			p[i] >>= 1;
		}
	}
	bool flag = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = i + 1; j < m && !flag; j++)
		{
			if (q[i][0] * q[j][0] + q[i][1] * q[j][1] + q[i][2] * q[j][2] + q[i][3] * q[j][3] == 0)
			{
				flag = 1;
				break;
			}
		}
	}
	if (tt == 0)
		flag = 1;
	if (flag)
		cout << "YES\n";
	else
		cout << "NO\n";
	cin >> n;
	return 0;
}