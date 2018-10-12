#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    int a[500001];

    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);
    int p1 = 0, p2 = n/2, ats = n;

    while(p1 < n/2 && p2 < n)
        if(2*a[p1] <= a[p2])
            ats--,p1++,p2++;
        else
            p2++;

    cout<<ats<<"\n";

}
