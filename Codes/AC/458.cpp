#include <bits/stdc++.h>

using namespace std;

vector<int64_t> p;

void find_p(int j, int r, int64_t x, int start = 0)
{
    if (j < 0)
    {
        if (r == 0) p.push_back(x);
        return;
    }

    for (int d = start; d < 10; ++d)
    {
        if (r - d >= 0)
        {
            x *= 10; x += d;
            find_p(j - 1, r - d, x);
            x /= 10;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    int64_t k;
    int j = 1;

    cin >> k;

    while (p.size() < k) find_p(j++, 10, 0, 1);

    cout << p[k - 1] << endl;

    return 0;
}
