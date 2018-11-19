#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e2 + 10;
const int inf = 0x3f3f3f3f;

string s, ss[N];
int main()
{
	int n;
	cin >> s >> n;
	bool ans = 0;
	for(int i = 0; i < n && !ans; i++)
	{
		cin >> ss[i];
		if((ss[i][0] == s[0] && ss[i][1] == s[1]) || (ss[i][0] == s[1] && ss[i][1] == s[0])) ans = 1;
	}
	if(!ans)
	{
		for(int i = 0; i < n && !ans; i++)
		{
			for(int j = i + 1; j < n && !ans; j++)
			{
				if((ss[i][0] == s[1] && ss[j][1] == s[0]) || (ss[j][0] == s[1] && ss[i][1] == s[0]))
					ans = 1;
			}
		}
	}
	cout << (ans ? "YES" : "NO") << endl;

	return 0;
}