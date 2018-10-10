#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <cstring>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <ctime>
#include<complex>
#include<unordered_set>
using namespace std;

#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define RFOR(i,b,a) for(int i = (b) - 1; i >= (a); i--)
#define ITER(it, a) for(typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define FILL(a, value) memset(a, value, sizeof(a))

#define SZ(a) (int) a.size()
#define ALL(a) a.begin(),a.end()
#define PB push_back
#define MP make_pair

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PII;

const double PI = acos(-1.0);
const LL INF = 1000 * 1000 * 1000 + 7;
const LL LINF = INF * (LL)INF;

const int MAX = 1000 * 1000 + 47;

string s;
int P[MAX];
int U[MAX];

void piFunction(const string& s)
{
	P[0] = 0;
	FOR(i, 1, SZ(s))
	{
		int j = P[i - 1];
		while (j && s[j] != s[i]) j = P[j - 1];

		if (s[j] == s[i]) j++;
		P[i] = j;
	}
}

int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> s;
	piFunction(s);
	FOR(i, 0, SZ(s) - 1)
	{
		U[P[i]] = 1;
	}

	int len = P[SZ(s) - 1];
	while (len)
	{
		if (U[len])
		{
			cout << s.substr(0, len) << endl;
			return 0;
		}

		len = P[len - 1];
	}

	cout << "Just a legend" << endl;
}