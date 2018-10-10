#define _CRT_SECURE_NO_WARNINGS 

#include <math.h> 
#include <stdio.h> 
#include <algorithm> 
#include <set> 
#include <iostream> 
#include <vector> 
#include <queue> 
#include <map> 
#include <string> 
#include <algorithm> 
#include <time.h> 
#include <stack>
#include <cassert> 
#include <functional> 
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef unsigned u;
typedef unsigned char uc;
typedef long double db;

#define mp(a, b) make_pair(a, b) 
#define pb(a) push_back(a) 
#define INF 1000000000 
#define LLINF 1000000000000000000 
#define EPS 1e-8
#define mpp(a, b) pp{a, b} 
#define pii pair<int, int> 
#define pbd pair<bool, double> 

#pragma comment(linker, "/STACK:16777216")

const u P = 7;
u h[1000001];
u p[1000001];
string s;

bool ok(int len)
{
	for (int i = len + 1; i <= s.size() - 1; i++)
	{
		u nowHash = h[i] - h[i - len] * p[i - (i - len)];

		if (nowHash == h[len])
			return 1;
	}

	return 0;
}

int main()
{
	srand(time(0));
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin.sync_with_stdio(0);
	cout.tie(0);

	cin >> s;

	p[0] = 1;

	for (int i = 0; i < s.size(); i++)
	{
		h[i + 1] = h[i] * P + (uc)s[i];
		p[i + 1] = p[i] * P;
	}

	vector<int> okLen;

	for (int i = 1; i <= s.size() - 1; i++)
	{
		if (h[i] == h[s.size()] - h[s.size() - i] * p[s.size() - (s.size() - i)])
			okLen.push_back(i);
	}

	if (okLen.empty())
	{
		cout << "Just a legend";
		return 0;
	}

	int l = 0, r = okLen.size();

	while (r - l > 1)
	{
		int m = (l + r) / 2;

		if (ok(okLen[m]))
			l = m;
		else
			r = m;
	}
	
	if (!ok(okLen[l]))
	{
		cout << "Just a legend";
		return 0;
	}

	for (int i = 0; i < okLen[l]; i++)
		cout << s[i];

	return 0;
}