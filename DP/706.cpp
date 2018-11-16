#include <iostream>
using namespace std;
string a;
int m;
int sum[100005];
int main()
{
	cin >> a >> m;
	for (int i = 0; i < a.length() - 1; i++)
		if (a[i] == a[i + 1])
			sum[i + 1]++;
	for (int i = 1; i <= a.length(); i++)
		sum[i] += sum[i - 1];
	for (int i = 0; i < m; i++)
	{
		int l, r;
		cin >> l >> r;
		cout << sum[r - 1] - sum[l - 1] << endl;
	}
}