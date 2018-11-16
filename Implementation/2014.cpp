#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, x = 0 , y = 0 , z = 0 , tempx , tempy , tempz;
    cin >> n;
    for (int i=0 ; i<n ; i++)
    {
        cin >> tempx >> tempy >> tempz ;
        x += tempx;
        y += tempy;
        z += tempz;
    }
    if (x || y || z)
    {
        cout << "NO" ;
    }
    else
        cout << "YES" ;
    return 0;
}
