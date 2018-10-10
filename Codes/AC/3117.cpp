#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int pos = min_element(v.begin(), v.end()) - v.begin();
    int m = v[pos];
    for (int i = 0; i < n; i++)
        v[i] -= m;
    int q = 0;
    for (int i = 0; i < n; i++)
    {
        int j = (i + m) % n;
        v[j] -= q;
        if (v[j] <= 0)
        {
            cout << j + 1 << endl;
            break;
        }
        q++;
    }


    return 0;
}
