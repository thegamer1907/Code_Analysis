#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <functional>

using namespace std;

typedef long long int64;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> sum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i)
        {
            sum[i] = sum[i - 1] + a[i];
        }
        else
        {
            sum[i] = a[i];
        }
    }
    if (sum.back() == n)
    {
        cout << n - 1 << endl;
        return 0;
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = j - i + 1 - 2 * (sum[j] - sum[i] + a[i]);
            temp = sum.back() + temp;
            if (temp > mx)
            {
                //cout << temp << ' ' << i << ' ' << j << endl;
                mx = temp;
            }
        }
    }
    cout << mx << endl;
    return 0;
}