#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define all(v) 			((v).begin()), ((v).end())
#define allr(v)			((v).rbegin()), ((v).rend())
#define sz(v) 			((int)((v).size()))

typedef long long ll;

void File()
{
	freopen("output.txt", "w", stdout);
	freopen("input.txt", "r", stdin);
}
void fast()
{
	ios::sync_with_stdio(NULL);
	cout.tie(NULL);
	cin.tie(NULL);
}
const double pi = 2 * acos(0.0);
const int nn = 5e1 + 4;
const int oo = 0x3f3f3f3f;

int main()
{
	fast();
	int n, m;
	cin >> n >> m;
	char arr[nn];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	while (m--)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] == 'B'&&arr[i + 1] == 'G')
				swap(arr[i], arr[i + 1]), i++;
		}
	}
	for (int i = 0; i < n; i++)
		cout << arr[i];
	cout << endl;
#if _DEBUG
	system("pause");
#endif
	return 0;
}