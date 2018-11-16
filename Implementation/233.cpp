//#pragma gcc optimize("OFast")
//#pragma gcc target("sse,sse2,sse3,sse4,tune=native")
//#pragma gcc optimize("unroll-loops")

#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

#define sz(a) ((int)(a).size())
#define all(a) (a).begin(), a.end()


signed main()
{
	int n, a, b;
	cin >> n >> a >> b;
	--a, --b;
	if (a > b)
	{
		swap(a, b);
	}
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		v[i] = i;
	}
	int k = 1;
	while (1)
	{
		if (v.size() == 2)
		{
			cout << "Final!";
			return 0;
		}
		for (int i = 0; i + 1 < v.size(); i += 2)
		{
			if ((v[i] == a && v[i + 1] == b))
			{
				cout << k;
				return 0;
			}
		}
		++k;
		vector<int> nw;
		for (int i = 0; i < v.size(); i += 2)
		{
			if (v[i] == a || v[i + 1] == a)
			{
				nw.push_back(a);
			}
			else if (v[i] == b || v[i + 1] == b)
			{
				nw.push_back(b);
			}
			else
			{
				nw.push_back(v[i]);
			}
		}
		v = nw;
	}
}