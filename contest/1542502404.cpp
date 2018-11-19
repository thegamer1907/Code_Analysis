#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = (int)1e9 + 7;
const int infint = (int)1e9;
const ll inf = (ll)1e18;
const int MAXN = 107;
string s[MAXN];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string pass;
	cin >> pass;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < n; i++)
		if(s[i] == pass)
			return cout << "YES", 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if(s[i][1] == pass[0] && s[j][0] == pass[1])
				return cout << "YES", 0;
	cout << "NO";
}
