#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
#include <cstring>
// DON'T DIVIDE
// Try different approaches
using namespace std;

int n;
const int MAXN = 500005;
string s[MAXN];

int main()
{
	ios::sync_with_stdio(0);
	cin >> n;

	for(int i = 0; i < n; i++)
		cin >> s[i];

	for(int i = n - 1; i > 0; i--)
		if(s[i - 1] > s[i])
		{
			for(int j = 1; j < s[i - 1].size(); j++)
				if(s[i - 1][j] > s[i][j])
				{
					s[i - 1] = s[i].substr(0, j);
					break;
				}
		}

	for(int i = 0; i < n; i++)
		cout << s[i] << "\n";
	return 0;
}