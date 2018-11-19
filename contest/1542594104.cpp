#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, cnt1 = 0, cnt2 = 0;
    char a, b, c1, c2;

    cin >> a >> b;

    cin >> n;

    for(i = 0; i < n; ++i)
    {
        cin >> c1 >> c2;
        if(c1 == a && c2 == b)
        {
            cout << "YES";
            return 0;
        }
        if(c1 == b)
            cnt2++;
        if(c2 == a)
            cnt1++;
    }
    if(cnt1 > 0 && cnt2 > 0)
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";

return 0;
}
