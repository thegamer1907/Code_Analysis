#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>

using namespace std;

#define int long long int
#define endl '\n'
#define fi first
#define se second

void doRoutine()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

signed main()
{
	doRoutine();
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	h %= 12;
	t1 %= 12;
	t2 %= 12;
	if (t1 > t2)
		swap(t1, t2);
	int ok = 0;
	ok += (t1 <= h && h < t2) + (t1 <= m / 5 && m / 5 < t2) + (t1 <= s / 5 && s / 5 < t2);
	if (ok == 0 || ok == 3)
		return cout << "YES" << endl, 0;
	cout << "NO" << endl;
	return 0;
}
