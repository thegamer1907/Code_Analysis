#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y,z,sx,sy,sz;

    while(cin >> n)
    {
        sx=0;
        sy=0;
        sz=0;
        while(n--)
        {
            cin >> x >> y >> z;
            sx+=x;
            sy+=y;
            sz+=z;
        }
        if(sx==0 && sy==0 && sz==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
