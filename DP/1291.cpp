#include <bits/stdc++.h>
using namespace std;
int n;
bool a[101];
int d[101];
int sum;

void input()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += int(a[i]);
        if (!a[i]) d[i] = 1;
        else d[i] = -1;
    }
}

void solve()
{
    int temp = d[0];
    int max1 = d[0];

    for (int i = 1; i < n; i++)
    {
        temp = max(d[i], temp + d[i]);
        //cout << temp << " " << max1 << endl;
        max1 = max(temp, max1);
    }

    cout << sum + max1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    input();
    solve();

    return 0;

}
