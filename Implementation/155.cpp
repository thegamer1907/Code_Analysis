#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int l = 0, r = n;
    int cnt = 0, ans = 0;
    while (l != r - 1)
    {
        if (l < b && r >= b) ans = cnt;
        int mid = (l + r) / 2;
        if (mid >= a) r = mid;
        else l = mid;
        cnt++;
    }
    if (ans == 0)
    {
        cout << "Final!";
    }
    else
    {
        cout << cnt - ans << endl;
    }
}
