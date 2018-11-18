#include <bits/stdc++.h>
#define pb push_back
#define endl '\n' 
#define MOD 1000000007
#define MAX 1e18+3
using namespace std;
typedef long long int ll;

int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string a; cin >> a;
	int n; cin >> n;
	vector<string> s(n);
	set<char> f, l;
	for (int i = 0; i < n; ++i)
	{
		cin >> s[i];
		if (s[i] == a)
		{
			cout << "YES\n";
			return 0;
		}
		f.insert(s[i][0]);
		l.insert(s[i][1]);
	}
	if (f.find(a[1]) != f.end() and l.find(a[0]) != l.end())
	{
		cout << "YES\n";
		return 0;
	}
	cout << "NO\n";
}