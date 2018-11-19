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
#include<fstream>

using namespace std;
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define RFOR(i,b,a) for(int i = (b) - 1; i >= (a); i--)
#define ITER(it,a) for(typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define FILL(a,value) memset(a, value, sizeof(a))

#define ALL(a) a.begin(),a.end()
#define SZ(a) (int)a.size()
#define PB push_back
#define MP make_pair

typedef long long LL;
typedef vector<int> VI;
typedef pair<LL, LL> PII;

const double PI = acos(-1.0);
const int INF = 1000 * 1000 * 1000 + 7;
const LL LINF = INF * (LL)INF;

const int MAX = 200 + 47;
const int MAX1 = 5000 + 47;
string t;
int C1[26];
int C2[26];

int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> t;
	int n;
	cin >> n;
	FOR(i, 0, n)
	{
		string s;
		cin >> s;
		if (s == t)
		{
			cout << "YES" << endl;
			return 0;
		}

		C1[s[0] - 'a']++;
		C2[s[1] - 'a']++;
	}
	
	if (C2[t[0] - 'a'] && C1[t[1] - 'a'])
	{
		cout << "YES" << endl;
		return 0;
	}

	cout << "NO" << endl;
}