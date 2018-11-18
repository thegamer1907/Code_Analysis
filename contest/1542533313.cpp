#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
const int MAXN = 100005;
int a[MAXN][4];
bool have[16];

int main()
{
	cin >> n >> k;
	for(int i = 0; i < n; i++)
	{
		int x = 0;
		for(int j = 0; j < k; j++)
		{
			cin >> a[i][j];
			x *= 2;
			x += a[i][j];
		}
		have[x] = true;
	}

	if(have[0])
	{
		cout << "YES\n";
		return 0;
	}

	for(int i = 0; i < 16; i++)
		for(int j = 0; j < 16; j++)
			if(have[i] && have[j] && i != j && (i & j) == 0)
			{
				cout << "YES\n";
				return 0;
			}

	cout << "NO\n";
	return 0;
}