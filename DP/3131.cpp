#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX_SIZE = 510;

char arr[MAX_SIZE][MAX_SIZE];

ll rows[MAX_SIZE][MAX_SIZE], col[MAX_SIZE][MAX_SIZE];

int main()
{
	memset(rows, 0, sizeof(rows));
	memset(col, 0, sizeof(col));
	int h, w;
	cin >> h >> w;
	for(int i = 0; i <= h; i++)
	{
		arr[i][0] = '#';
	}
	for(int i = 0; i <= w; i++)
	{
		arr[0][i] = '#';
	}
	string a;
	for(int i = 1; i <= h; i++)
	{
		cin >> a;
		for(int j = 0; j < w; j++)
		{
			arr[i][j + 1] = a[j];
		}
	}
	for(int i = 1; i <= h; i++)
	{
		// cout << i << endl;
		for(int j = 1; j <= w; j++)
		{
			rows[i][j] = rows[i - 1][j] + rows[i][j - 1] - rows[i - 1][j - 1];
			if(arr[i][j] == '.' && arr[i][j - 1] == '.')
			{
				rows[i][j] += 1;
			}
			// cout << j << "|" << rows[i][j] << " ";
		}
		// cout << endl;
	}
	for(int i = 1; i <= h; i++)
	{
		// cout << i << endl;
		for(int j = 1; j <= w; j++)
		{
			col[i][j] = col[i - 1][j] + col[i][j - 1] - col[i - 1][j - 1];
			if(arr[i][j] == '.' && arr[i - 1][j] == '.')
			{
				col[i][j] += 1;
			}
			// cout << j << "|" << col[i][j] << " ";
		}
		// cout << endl;
	}
	int q;
	int r1, c1, r2, c2;
	cin >> q;
	while(q--)
	{
		cin >> r1 >> c1 >> r2 >> c2;
		ll ans = 0;
		ans += rows[r2][c2] - rows[r2][c1] - rows[r1 - 1][c2] + rows[r1 - 1][c1];
		// cout << r1 << " " << c1 << " " << r2 << " " << c2 << endl;
		// cout << rows[r2][c2] << " " << rows[r2][c1] << " " << rows[r1 - 1][c2] << endl;
		// cout << ans << endl;
		ans += col[r2][c2] - col[r1][c2] - col[r2][c1 - 1] + col[r1][c1 - 1];
		cout << ans << endl;
	}
	return 0;
}