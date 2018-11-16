#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()

{
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n;
    vector<int> boys(n);
    for (auto& i : boys)
    {
        cin >> i;
    }
    cin >> m;
    vector<int> girls(m);
    for (auto& i : girls)
    {
        cin >> i;
    }
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    int l1, l2;
    l1 = l2 = 0;
    int answer = 0;
    while (l1 < n && l2 < m)
    {
        int i = l2;
        while (i < m && abs(boys[l1] - girls[i]) > 1)
        {
            i++;
        }
        if (i < m)
        {
            answer++;
            l2 = i + 1;
        }
        l1++;
    }
    cout << answer;
    return 0;
}
