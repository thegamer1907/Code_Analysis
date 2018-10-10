#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define fi first
#define se second

void doRoutine()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int a[100179];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int tmp = 0, i = 0;
    while (a[i] - tmp > 0)
    {
        i++;
        if (i == n)
            i = 0;
        tmp++;
    }
    cout << i + 1 << endl;
    return 0;
}
