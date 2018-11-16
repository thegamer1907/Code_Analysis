#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t;
    cin>>n>>t;
    int a[n];
    for (int i=1;i<n;i++)
        cin>>a[i];
    for (i=1;i<t;i+=a[i]);
    if (i==t)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
