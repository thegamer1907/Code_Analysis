#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, t, tMin=INT_MAX, I;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        t = (n+a-1-i)/n + 1;
        if (t < tMin)
        {
            tMin = t;
            I = i;
        }
    }
    cout << I+1;
    return 0;
}
