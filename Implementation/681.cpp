#include<bits/stdc++.h>
using namespace std;

int n, i, so, k;
int a[100];

main()
{
    cin >> n >> k;
    so = 0;
    for (i=1;i<=n;i++)
        cin >> a[i];
    for (i=1;i<=n;i++)
    {
        if ((a[i] >= a[k]) && (a[i] > 0))
            so++;
    }
    cout << so;
}
