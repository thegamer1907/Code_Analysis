#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <set>
#include <map>
#include <fstream>
#include <string>
#include <stack>
#include <deque>
#include <algorithm>
#include <random>
#include <ctime>
#include <sstream>
#include <list>
#include <functional>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define mp make_pair
#define sq(x) ((x)*(x))
#define bcount(x) __builtin_popcount(x)
#define gcd(x,y) __gcd(x,y)

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vint = vector<int>;
using vll = vector<ll>;

bool was[100];
vint p;

int cycle(int x)
{
	int c = x;
	int len = 0;
	do
	{
		was[c] = true;
		len++;
		c = p[c];
	} while (c != x);
	return len;
}

int nod(int a, int b)
{
	int c;
	while (b) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int nok(int a, int b)
{
	return a * b / nod(a, b);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//freopen("bridges.in", "r", stdin);
	//freopen("bridges.out", "w", stdout);

	int k;
	cin >> k;
	int cur = 19;
	k--;
	while (k)
	{
		cur++;
		int temp = cur;
		int sum = 0;
		while (temp)
		{
			sum += temp % 10;
			temp /= 10;
			if (sum > 10)
				break;
		}
		if (sum == 10)
			k--;
	}
	cout << cur;
}