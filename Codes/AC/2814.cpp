#include <iostream>
using namespace std;
const int MAX = 1000005;
int z[MAX];
void build(string s)
{
	int n = s.size();
	z[0] = n;
	int l = 0, r = 0;
	for (int i = 1; i < n; i++)
		if (r < i)
		{
			l = r = i;
			while (r < n && s[r - l] == s[r])
				r++;
			z[i] = r - l;
		}
		else if (z[i - l] < r - i)
			z[i] = z[i - l];
		else
		{
			l = i;
			while (r < n && s[r - l] == s[r])
				r++;
			z[i] = r - l;
		}
}
int cnt[MAX];
int main()
{
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	int n = s.size();
	build(s);
	for (int i = 0; i < n; i++)
		cnt[z[i]]++;
	for (int i = n; i >= 0; i--)
		cnt[i] += cnt[i + 1];
	for (int i = 1; i < n; i++)
		if (z[i] == n - i && cnt[n - i] > 2)
		{
			cout << s.substr(i, n - i) << endl;
			return 0;
		}
	cout << "Just a legend" << endl;
	return 0;
}
