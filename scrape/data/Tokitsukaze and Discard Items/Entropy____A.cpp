#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <list>
#include <stdio.h>
#define _for(i, a, b) for (long long int i = (a); i < (b); ++i)
#define _rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define for_each_cout(c, elemtype) for_each((c).begin(), (c).end(), op_cout<elemtype>)
using namespace std;
typedef long long LL;

const int maxn = 1e9;
const double eps = 1e-7, Pi = acos(float(-1));

template <typename T>
void op_cout(T elem)
{
	cout << elem << endl;
}
int readint()
{
	int x;
	scanf("%d", &x);
	return x;
}

int main()
{
	long long int m, n, k;
	vector<long long int> p;
	cin >> n >> m >> k;
	_for(i, 0, m)
	{
		long long x;
		cin >> x;
		p.push_back(x);
	}
	//sort(p.begin(), p.end());
	long long int cnt = 0, idx = k;
	vector<long long int>::iterator iter = p.begin();
	while (iter != p.end())
	{
		//	vector<long long int>::iterator it = upper_bound(iter, p.end(), idx);
		vector<long long int>::iterator it = iter;
		for (; it != p.end(); it++)
		{
			if (*it > idx)
			{
				break;
			}
		}
		if (it != iter)
		{
			cnt++;
			idx += it - iter;
			iter = it;
		}
		else
		{
			long long int kk = ceil((*it - idx) * 1.0 / k);
			idx += k * kk;
		}
	}
	cout << cnt << endl;
	return 0;
}