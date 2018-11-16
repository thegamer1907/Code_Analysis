#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple

using namespace std;

typedef pair<int, int> ii;
typedef long long ll;

const int N = 1000010;

int z[N];

void buildz(const string& s)
{
	int l = -1, r = -1;
	z[0] = 0x3f3f3f3f;
	int n = s.size();
	for (int i = 1; i < n; i++)
	{
		if (i > r)
			l = r = i;
		int rem = r - i;
		if (z[i-l] < rem)
		{
			z[i] = z[i-l];
			continue;
		}
		l = i;
		while (r < n and s[r] == s[r-l])
			r++;
		r--;
		z[i] = r - l + 1;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	buildz(s);
	int ans = 0;
	int mid = 0;
	for (int i = 1; i < s.size(); i++)
	{
		//cout << "z[" << i << "] = " << z[i] << endl;
		if (z[i] == s.size()-i)
			mid = max(mid, z[i]-1);
		else
			mid = max(mid, z[i]);
	}
	for (int i = 1; i < s.size(); i++)
	{
		if (z[i] == s.size()-i and z[i] <= mid)
			ans = max(ans, z[i]);
	}
	if (ans == 0)
		cout << "Just a legend\n";
	else
		cout << s.substr(0, ans) << '\n';
	return 0;	
}

