#include <iostream>
#include <set>
using namespace std;
int s, n, m, t1, k = 1;
set<pair<int, int> > mp;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t1;
		s += t1;
		mp.insert(make_pair(s, k));
		k++;
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> t1;
		cout << (*mp.lower_bound(make_pair(t1, 0))).second << endl;
	}
}
