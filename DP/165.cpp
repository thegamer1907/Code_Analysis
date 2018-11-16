#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    int a[104] ,b[104];
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin >> a[i];
    }

    cin >> m;
    for(int i=0; i<m; ++i)
    {
        cin >> b[i];
    }

    sort(a,a+n);
    sort(b,b+m);
    int cnt=0;

    /*
    1    2      4   6

    1      5    5     7  9

    */

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(abs(a[i]-b[j]) <= 1)
            {
                cnt++;
                b[j] = INT_MAX;
                break;
            }
        }
    }



    cout << cnt;
    return 0;
}
