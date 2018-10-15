#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,mx=0,s=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]>mx)
            mx = a[i];
        s += a[i];

    }

    if((s+m)%n == 0)
    {
        if((s+m)/n >= mx)
            cout<<(s+m)/n;
        else
            cout<<mx;
    }
    else
    {
        if(((s+m)/n)+1 >= mx)
            cout<<((s+m)/n)+1;
        else
            cout<<mx;
    }

    cout<<" "<<mx+m<<endl;
}
