#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <set>
#include <utility>
#include <string>
#include <queue>
#include <cstring>
#include <map>
#include <stack>
#include <functional>
#include <math.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int inf32 = 1e9 + 9;
const ll inf64 = 1e18 + 18;


int main()
{
// 	freopen("in.txt", "r", stdin);
	string rez;
	cin >> rez;
	int n;
	cin >> n;
	vector<string> vc(n);
	for (int i = 0; i < n; ++i) cin >> vc[i];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			string f = vc[i] + vc[j];
			for (int k = 0; k < 3; ++k)
			{
				if (f.substr(k, 2) == rez)
				{
					cout << "YES";
					return 0;
				}
			}
		}
	}
	cout << "NO";
	return 0;
}