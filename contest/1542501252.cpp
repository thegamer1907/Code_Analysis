#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k; cin >> n >> k;

    vector <int> a(n);
    for(int i = 0 ; i < n ; i++)
    {
        int y;
        int x=0;
        for(int j = 0 ; j < k ; j++)
        {
            cin >> y;
            x<<=1;
            x+=y;
        }
        a[i]=x;
    }

    sort(a.begin(),a.end());
    for(int i = 0 ; i < (1<<k) ; i++)
    {
        for(int j = 0 ; j < (1<<k) ; j++)
        {
            if(((i&j)==0) &&
               (find(a.begin(),a.end(),i)!=a.end()) &&
               (find(a.begin(),a.end(),j)!=a.end()))
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
