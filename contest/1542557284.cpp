#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <string>
#include <map>
#include <stack>
#include <deque>
#include <set>
#define all(x) x.begin(), x.end()
#define xert first
#define yret second
#define pll pair <ll,ll>
#define pii pair <int,int>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	bool m[2]{0};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string tmp;
		cin >> tmp;
		if (tmp == a)
		{
			cout << "Yes";
			return 0;
		}
		else if (tmp[0] == a[1] && tmp[1] == a[0])
		{
			cout << "Yes";
			return 0;
		}
		else if(tmp[0] == a[1])
		{
			m[1] = 1;
		}
		else if (tmp[1] == a[0])
		{
			m[0] = 1;
		}
	}
	if (m[0] == 1 && m[1] == 1) cout << "Yes";
	else cout << "No";
	return 0;
}