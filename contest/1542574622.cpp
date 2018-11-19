#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <iterator>
#include <bitset>
#include <vector>
#include <math.h>
#include <queue>
#include <map>
#include <set>
#include <list>
#include <time.h>
#include <algorithm>
#define mkp make_pair
#define inf 1000000010
#define MOD 1000000007
#define MOD2 1000000013
#define eps 1e-11
#define PI 3.14

using namespace std;
typedef long long ll;

int n, k;
int a[4];
set<int> s;

int make()
{
	int res = 0;
	for (int i = 0; i < k; i++)
		res += (a[i] << i);
	return res;
}

int main()
{
	ios_base::sync_with_stdio(0);
	//ifstream cin("in.txt");
	cin >> n >> k;
	while (n--)
	{
		for (int i = 0; i < k; i++)
			cin >> a[i];
		s.insert(make());
	}
	for (set<int>::iterator i = s.begin(); i != s.end(); i++)
	{
		for (set<int>::iterator j = s.begin(); j != s.end(); j++)
		{
			if (((*i)&(*j)) == 0)
			{
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
}