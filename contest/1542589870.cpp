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
#define MAXN 5000005
#define MAX 10000000
#define INF 0x3f3f3f3f
#define MOD 10000000
#define pi acos(-1)
#define eps 1e-4
#define e 2.718281828459
#define ln(i) log(i)/log(e)

using namespace std;
typedef long long ll;

string s;
int main()
{
	int n;
	cin >> s;
	cin >> n;
	string t;
	bool flag1 = 0, flag2 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		if(t[1] == s[0])
			flag1 = 1;
		if (t[0] == s[1])
			flag2 = 1;
		if (t[0] == s[0] && t[1] == s[1])
			flag1 = 1, flag2 = 1;
		if (flag1&&flag2)
		{
			cout << "YES\n";
			return 0;
		}
	}
	if (flag1 == 0 || flag2 == 0)
		cout << "NO\n";
	cin >> n;
	return 0;
}