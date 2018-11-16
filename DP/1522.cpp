#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int MAX = 101;
    int a[MAX];
    int m = 0, q = -1, p = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(a[i] == 1)
        {
            p = max(p-1,-1);
            m++;
        }
        else if(a[i] == 0)
        {
            p = max(p+1,1);
        }
        q = max(q,p);
    }
    cout << q + m;
    return 0;
}