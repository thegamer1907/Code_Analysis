/*input
3 11
20 3 5
*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
typedef vector<lli > vlli;

lli check(vlli cost, lli k, lli s) {
	vlli temp((int)cost.size());
	for (int i = 0; i < (int)cost.size(); ++i)
	{
		temp[i] = cost[i] + (i + 1) * k;
	}
	lli c = 0;
	sort(temp.begin(), temp.end());
	for (int i = 0; i < k; ++i)
	{
		if(s >= temp[i]) {
			s -= temp[i];
			c += temp[i];
		} else {
			return -1;
		}
	}
	return c;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	lli n, s;
	cin >> n >> s;
	vlli cost(n);
	for (int i = 0; i < n; ++i)
		cin >> cost[i];

	lli l = 0, r = n - 1, mid;
	lli max_s = 0, min_c = 10000000000000000;
	while(l <= r) {
		mid = (l + r) >> 1;
		lli c = check(cost, mid + 1, s);
		if(c != -1) {
			if(mid + 1 >= max_s) {
				if(mid + 1 == max_s)
					min_c = min(c, min_c);
				else 
					min_c = c;
				max_s = mid + 1;
			}
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	if(max_s == 0)
		cout << "0 0";
	else
		cout << max_s << " " << min_c << endl;
	return 0;
}