#include <bits/stdc++.h>
using namespace std;
#define int int64_t

signed main()
{
    ios_base::sync_with_stdio(0);       cin.tie(0);     cout.tie(0);
    int n, d;       cin >> n >> d;
    vector <pair <int, int> > V;
    for(int i = 0; i < n; i++)
    {
        int money, factor;      cin >> money >> factor;
        V.push_back({money, factor});
    }
    sort(V.begin(), V.end());
    int max_sum = 0, sum = 0;
    for(int i = 0, j = 0; j < n; j++)
    {
        while(V[j].first >= V[i].first + d)
        {
            max_sum = max(max_sum, sum);
            sum -= V[i].second;
            i++;
        }
        sum += V[j].second;
    }
    cout << max(max_sum, sum) << endl;
    return 0;
}