#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector < int > a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int m;
    cin >> m;
    vector < int > b(m);
    for(int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int p1 = 0, p2 = 0;
    int c = 0;
    while(p1 != n && p2 != m)
    {
        if(abs(a[p1] - b[p2]) <= 1)
        {
            ++c; ++p1; ++p2;
        }
        else if(a[p1] > b[p2])
            ++p2;
        else if(a[p1] < b[p2])
            ++p1;
    }
    
    cout << c;
    return 0;
}