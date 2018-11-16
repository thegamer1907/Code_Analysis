#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <set>
#include <map>
#include <string.h>
#include <cmath>

#define     lf(i,a,n)            for (int i=a;i<n;i++)
#define     ld(i,a,n)            for (int i=n-1;i>=a;i--)
#define     all(x)               (x).begin(),(x).end()
#define     allPairFirst(v)       v.begin(), v.end(), [](auto &left, auto &right) {return left.first < right.first;}
#define     allPairSecond(v)      v.begin(), v.end(), [](auto &left, auto &right) {return left.second < right.second;}
#define     SZ(x)                 ((int)(x).size())
#define     CLR(a)                memset(a,0,sizeof(a))
#define     SET(a)                memset(a,-1,sizeof(a))

#define     li                    long long int
#define     pii                   pair<int,int>
#define     pli                   pair<ll,ll>
#define     N                     1000009
#define     M                     1000000007
#define     fi                    first
#define     se                    second
#define     pb                    push_back
#define     mp                    make_pair

using namespace std;

template <class T> inline T gcd(T a, T b) { while (b) { a = a % b; swap(a, b); }return a; }

int nextIndex(const vector<pair<int, int>> &ab, int v,int comp)
{
	for (int i = 0; i < SZ(ab); i++)
	{
		if (ab[i].second == v)
		{
			int diff = abs(comp- ab[i].first);

			if (diff <= 1)
			{
				return i;
			}
		}
	}

	return -1;
}

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> a;

	for (int i = 0; i < n; i++)
	{
		int numb;
		cin >> numb;
		a.push_back(make_pair(numb, 1));
	}

	int m;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int numb;
		cin >> numb;
		a.push_back(make_pair(numb, 2));
	}

	sort(allPairFirst(a));

	int count = 0;

	for (int i = 0; i < SZ(a); i++)
	{

		if (a[i].second == 1)
		{
			int res = nextIndex(a, 2, a[i].first);

			if (res >= 0)
			{
				a[res].second = 3;
				a[i].second = 3;
				count++;
			}
		}
		else if (a[i].second == 2)
		{
			int res = nextIndex(a, 1, a[i].first);

			if (res >= 0)
			{
				a[res].second = 3;
				a[i].second = 3;

				count++;
			}
		}
	}

	cout << count << endl;

   a:
	int xxxxx;
	cin >> xxxxx;

	return 0;
}