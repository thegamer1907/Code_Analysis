#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#include <array>
#include <string>
#include <stack>
#include <bitset>
#include <cmath>
#include <set>
#include <memory>
#include <iomanip>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);

    long long n, q;

    cin >> n >> q;

    vector<long long> a(n);

    for(long long i = 0; i < n; ++i)
    {
        cin >> a[i];

        if(i != 0)
        {
            a[i] += a[i - 1];
        }
    }

    long long v = 0;
    long long last_hurt = 0;
    for(long long i = 0; i < q; ++i)
    {
        long long k;
        cin >> k;

        long long damage = (v != 0 ? a[v - 1] : 0) + last_hurt + k;

        if(damage >= a.back())
        {
            cout << n << endl;
            v = 0;
            last_hurt = 0;

            continue;
        }

        long long d = distance(a.begin(), upper_bound(a.begin(), a.end(), damage));

        if(d == 0)
        {
            last_hurt = damage;
        }
        else if(a[d - 1] == damage)
        {
            v = d;
            last_hurt = 0;
        }
        else
        {
            v = d;
            last_hurt = damage - a[d - 1];
        }

        cout << n - v << endl;
    }

    return 0;
}