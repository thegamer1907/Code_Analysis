#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,xt=0,yt=0,zt=0;
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        int x,y,z;
        cin >> x >> y >> z;
        xt += x;
        yt += y;
        zt += z;
    }
    if(abs(xt)+abs(yt)+abs(zt))
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
