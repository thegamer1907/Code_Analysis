#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    vector < long long int > v;
    v.resize(n + 1);
    v[0] = 0;
    vector < long long int > p;
    p.resize(n + 1);
    p[0] = 0;
    for (long long int i = 1; i <= n; i ++)
    {
        cin >> v[i];
    }
    sort(v.begin() + 1, v.end());
    for (long long int i = 1; i <= n; i ++)
    {
        p[i] = p[i - 1] + v[i];
    }
    long long int best = 0, o = 0;
    for (long long int i = 1; i <= n; i ++)
    {
        long long int l = 1, r = i;
        while (l <= r)
        {
            long long int mid = (l + r) / 2;
            if (abs((p[i] - p[mid - 1]) - (i - mid + 1) * v[i] ) <= k)
            {
                r = mid - 1;
                if (i - mid + 1 > o)
                {
                    best = v[i];
                    o = i - mid + 1;
                }
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    cout << o << " " << best << endl;
}