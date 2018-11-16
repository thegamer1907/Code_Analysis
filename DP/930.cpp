#include <bits/stdc++.h>
using namespace std;

int const N = 100;
int n, a[N + 1] = {}, zeros[N + 1] = {}, ones[N + 1] = {};

int main()
{
    //fstream input("input.txt"); cin.rdbuf(input.rdbuf());
    cin >> n;
    for (auto i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (auto i = 1; i <= n; i++)
    {
        zeros[i] += zeros[i - 1] + (1 - a[i]);
        ones[i] += ones[i - 1] + a[i];
    }

    auto ret = 0;
    for (auto i = 0; i < n; i++)
    {
        for (auto j = 1; j <= n - i; j++)
        {
            auto t = ones[j - 1] +
                     zeros[i + j] - zeros[j - 1] +
                     ones[n] - ones[i + j];
            if (t > ret)
            {
                ret = t;
            }
        }
    }

    cout << ret << endl;
}