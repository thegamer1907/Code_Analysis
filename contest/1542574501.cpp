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

const int N = 60;
bool used[N];

int main()
{
// 	freopen("in.txt", "r", stdin);
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	double ar[3];
	ar[0] = (h % 12) * 5 + double(m) / 60.0 + double(s) / 3600.0;
	ar[1] = m + double(s) / 60.0;
	ar[2] = s;
	sort(ar, ar + 3);
	t1 = (t1 % 12) * 5;
	t2 = (t2 % 12) * 5;
	if (t1 > t2) swap(t1, t2);
	bool flag = false;
	if (t1<ar[0] && t2>ar[2])
	{
		cout << "YES";
		return 0;
	}
	for (int i = 0; i < 3; ++i)
	{
		if (ar[i] > t1 && ar[i] < t2)
		{
			cout << "NO";
			return 0;
		}
	} 
	cout << "YES";
	return 0;
}