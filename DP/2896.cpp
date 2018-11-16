#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
const int MAXN = 105;
int a[MAXN];

int main()
{
	ios::sync_with_stdio(0);
	cin >> n >> k;

	for(int i = 0; i < n; i++)
		cin >> a[i];

	int temp = 0;
	for(int i = 0; i < k; i++)
		cin >> temp;

	if(k > 1)
	{
		cout << "YES\n";
		return 0;
	}

	bool done = false;
	for(int i = 0; i < n; i++)
	{
		if(i != 0 && a[i] != 0 && a[i] < a[i - 1])
			done = true;
		else if(a[i] == 0 && ((temp > a[i + 1] && i != n - 1) || (temp < a[i - 1] && i != 0)))
			done = true;
	}

	if(done)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}