#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[10000009];
bool c[10000009];
int com[10000009];

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n , x; cin >> n;
    for(int i = 0;i < n;i++)
    {
        cin >> x;
        a[x]++;
    }
    for(int i = 2;i <= 10000000;i++)
    {
        com[i] = com[i-1];
        if(!c[i])
        {
            for(int j = i;j <= 10000000;j += i)
                c[j] = true,com[i] += a[j];

        }

    }
    int q , r , l; cin >> q;
    for(int i = 0;i < q;i++)
    {
        cin >> l >> r;
        if(r > 10000000)
            r = 10000000;
        if(l > 10000000)
            l = 10000000;
        cout << com[r] - com[l-1] << endl;
    }
    return 0;
}
