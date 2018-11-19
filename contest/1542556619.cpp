#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 200, K = 10, M = 1024;

int d[N][K][M];

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<pair<string, string>> s(n);
	string t;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		for (int j = 0; j < t.length(); j++)
			for (int k = j; k < t.length(); k++)
				if (k - j < 10)
				{
					int z = 0;
					for (int x = j; x <= k; x++)
						z = z * 2 + t[x] - '0';
					d[i][k - j][z] = 1;
				}
				else
					break;
		s[i].first = t;
		s[i].second = t;
		while (s[i].first.size() > 9)
			s[i].first.erase(s[i].first.begin() + 9);
		while (s[i].second.size() > 9)
			s[i].second.erase(s[i].second.begin());
	}
	int m;
	cin >> m;
	for (int i = n; i < n + m; i++)
	{
		int l, r;
		cin >> l >> r;
		t = s[l - 1].second + s[r - 1].first;
		for (int j = 0; j < t.length(); j++)
			for (int k = j; k < t.length(); k++)
				if (k - j < 10)
				{
					int z = 0;
					for (int x = j; x <= k; x++)
						z = z * 2 + t[x] - '0';
					d[i][k - j][z] = 1;
				}
				else
					break;
		for (int k = 0; k < K; k++)
			for (int j = 0; j < M; j++)
				d[i][k][j] |= d[l - 1][k][j];
		for (int k = 0; k < K; k++)
			for (int j = 0; j < M; j++)
				d[i][k][j] |= d[r - 1][k][j];
		int ans = 0;
		for (int j = 0; j < 10; j++)
		{
			bool f = true;
			for (int k = 0; k < (1 << (j + 1)); k++)
				if (!d[i][j][k])
					f = false;
			if (f)
				ans++;
			else
				break;
		}
		cout << ans << endl;
		if (s[l - 1].first.size() == 9 && s[r - 1].second.size() == 9)
			s.push_back({ s[l - 1].first, s[r - 1].second });
		else
		{
			if (s[l - 1].first.size() < 9 && s[r - 1].second.size() < 9)
			{
				t = s[l - 1].first + s[r - 1].second;
			}
			if (s[l - 1].first.size() == 9 && s[r - 1].second.size() < 9)
			{
				t = t = s[l - 1].first + s[l - 1].second + s[r - 1].second;;
			}
			if (s[l - 1].first.size() < 9 && s[r - 1].second.size() == 9)
			{
				t = t = s[l - 1].first + s[r - 1].first + s[r - 1].second;;
			}
			s.push_back({ t, t });
			while (s[i].first.size() > 9)
				s[i].first.erase(s[i].first.begin() + 9);
			while (s[i].second.size() > 9)
				s[i].second.erase(s[i].second.begin());
		}
	}
	return 0;
}