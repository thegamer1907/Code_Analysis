#include <bits/stdc++.h>
#define fios ios_base::sync_with_stdio(false ),cin.tie(0),cout.tie(0);
using namespace std;
typedef long long ll;
int main()
{
    fios
    int n, a, count1(0), extra0(0), extra0max(-1);
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            count1 += 1;
            if (extra0 > 0)
            {
                extra0 -= 1;
            }
        }
        else
        {
            extra0 += 1;
            if (extra0 > extra0max)
            {
                extra0max = extra0;
            }
        }
    }
    cout << count1 + extra0max << endl;
    return 0;
}


