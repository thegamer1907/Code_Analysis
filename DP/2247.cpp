#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, a[100000], f[100000], l;
	set <int> s;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = n-1; i >= 0; i--)
    {
        s.insert(a[i]);
        f[i] = s.size();
    }

    for (int i = 0; i < m; i++)
    {
        cin >> l;
        cout << f[l-1] << endl;
    }
}
