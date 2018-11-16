#include <bits/stdc++.h>
using namespace std;

int n, m;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue<int, vector<int>, greater<int>> a, b;
    int n, m, sk;
    cin >> n;
    while (n--)
    {
        cin >> sk;
        a.push(sk);
    }
    cin >> m;
    while (m--)
    {
        cin >> sk;
        b.push(sk);
    }
    int ans = 0;
    while (!a.empty() && !b.empty())
    {
        if (abs(a.top() - b.top()) <= 1)
        {
            ans++;
            a.pop();
            b.pop();
        }
        else
            if (a.top() > b.top())
                b.pop();
            else
                a.pop();
    }
    cout << ans;
    return 0;
}
