#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;
typedef long long ll;
int const INF = numeric_limits<int>::max();

int const M = 1 << 4;
multiset<int> se;
int n, k;

inline bool check(vector<int> v)
{
	vector<int> cnt(k);
	if (v.size() == 1)
		return v[0] == 0;
	for (auto msk : v)
	{
		for (int i = 0; i < k; i++)
		{
			if (msk & (1 << i))
			{
				cnt[i]++;
				if (cnt[i] > v.size() / 2)
					return false;
			}
		}
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		int t = 0;
		for (int j = k - 1; j >= 0; j--)
		{
			int x;
			cin >> x;
			if(x)
				t += 1 << j;
		}
		se.insert(t);
	}
	bool flag = false;
	//if (k >= 4)
	//{
	//	for (int fs = 0; fs < M; fs++)
	//	{
	//		for (int sc = 0; sc < M; sc++)
	//		{
	//			for (int th = 0; th < M; th++)
	//			{
	//				for (int fo = 0; fo < M; fo++)
	//				{
	//					map<int, int> ma;
	//					ma[fs]++;
	//					ma[sc]++;
	//					ma[th]++;
	//					ma[fo]++;
	//					bool ok = true;
	//					for (auto p : ma)
	//					{
	//						if (se.count(p.first) < p.second)
	//							ok = false;							
	//					}
	//					if (ok && check({ fs, sc, th, fo }))
	//					{
	//						flag = true;
	//					}
	//				}
	//			}
	//		}
	//	}
	//}

	//if (k >= 3)
	//{
	//	for (int fs = 0; fs < M; fs++)
	//	{
	//		for (int sc = 0; sc < M; sc++)
	//		{
	//			for (int th = 0; th < M; th++)
	//			{
	//				map<int, int> ma;
	//				ma[fs]++;
	//				ma[sc]++;
	//				ma[th]++;
	//				bool ok = true;
	//				for (auto p : ma)
	//				{
	//					if (se.count(p.first) < p.second)
	//						ok = false;
	//				}
	//				if (ok && check({ fs, sc, th}))
	//				{
	//					flag = true;
	//				}
	//			}
	//		}
	//	}
	//}

	if (k >= 2)
	{
		for (int fs = 0; fs < M; fs++)
		{
			for (int sc = 0; sc < M; sc++)
			{
				map<int, int> ma;
				ma[fs]++;
				ma[sc]++;
				bool ok = true;
				for (auto p : ma)
				{
					if (se.count(p.first) < p.second)
						ok = false;
				}
				if (ok && check({ fs, sc}))
				{
					flag = true;
				}
			}
		}
	}
	if (k >= 1)
	{
		for (int fs = 0; fs < M; fs++)
		{
			if (check({ fs }))
			{
				map<int, int> ma;
				ma[fs]++;
				bool ok = true;
				for (auto p : ma)
				{
					if (se.count(p.first) < p.second)
						ok = false;
				}
				if (ok && check({ fs }))
				{
					flag = true;
				}
			}
		}
	}
	
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
 		

	return 0;
}