/*input
3
4 1 2
*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
typedef vector<lli > vlli;

int main()
{
	std::ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vlli a(n);
	vlli prefix(n, 0), suffix(n , 0);
	map<lli, lli> p, s;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	prefix[0] = a[0];
	p[prefix[0]] = 0;
	for (int i = 1; i < n; ++i)
	{
		prefix[i] = prefix[i - 1] + a[i];
		p[prefix[i]] = i;
	}

	suffix[n - 1] = a[n - 1];
	s[suffix[n - 1]] = n - 1;
	for (int i = n - 2; i >= 0; --i)
	{
		suffix[i] = suffix[i + 1] + a[i];
		s[suffix[i]] = i;
	}
	lli maxm = 0;
	for(auto& it : p) {
		if(s.find(it.first) != s.end() && it.second < s[it.first]) {
			maxm = max(maxm, it.first);
		}
	} 
	cout << maxm << endl;
	return 0;
}