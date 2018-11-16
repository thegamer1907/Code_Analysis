#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n,k,kol,i, a[101];
    cin >>  n >> k;
    kol=0;
    for ( int i=1; i<=n; i++) cin >> a[i];
    for ( int i=1; i<=n; i++)
    {
        if ((a[i]>=a[k]) && (a[i]>0)) kol++;
    }

    cout << kol;
    return 0;
}

