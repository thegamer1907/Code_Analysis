#include <bits/stdc++.h>
using namespace std;


const short Kmax = 5;

bool viz[1 << Kmax];

int n , k;

int main()
{
    int i , j;
    cin >> n >> k;
    while(n -- )
    {
        int baz2 = 0;
        bool x;
        for( i = 1 ; i <= k ; i++)
        {
            cin >> x;
            baz2 = baz2 * 2 + x;
        }
        viz[baz2] = true;
    }
    for( i = 0 ; i <= 15; i++)
        for( j = 0 ; j <= 15 ; j++)
            if(viz[i] && viz[j] && (i & j) == 0)
    {
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";
    return 0;
}
