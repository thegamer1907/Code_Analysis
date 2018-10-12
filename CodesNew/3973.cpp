#include <iostream>
#include <bits/stdc++.h>

#define ll long long
using namespace std;

ll a[200009];

int main()
{
    int n , q; cin >> n >> q;
    for(int i = 1;i <= n;i++)
    {
        ll x; cin >> x;
        a[i] = a[i-1] + x;
    }
    int index = 0;
    ll y = 0;
    for(int i = 0;i < q;i++)
    {
        ll x; cin >> x;
        if(x+y+a[index] >= a[n])
        {
            index = 0;
            cout << n << endl;
            y=0;
            continue;
        }
        x = x+a[index]+y  ;

        auto p = lower_bound(a+1,a+n+1,x) - a;
        if(a[p] > x)
           {
               p--;
               y = x - a[p];
           }
           else
            y = 0;
        index = p;
      //  cout << x << " " << p << " " <<  n-p  << " " <<  y << endl;
     cout << n-p << endl;
     

    }

    return 0;
}
