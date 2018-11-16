//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    int c=0;
    for(int i=0;i<n;++i)
    {
        if(a[i])
        {
            ++c;
            a[i]=-1;
        }
        else
            a[i]=1;
    }
    int s=0;
    int ma=-10;
    for(int i=0;i<n;++i)
    {
        s=s+a[i];
        if(s<0)
            s=0;
        ma=max(ma,s);
    }
    if(ma==0)
        ma=-1;
    c+=ma;
    cout<<c;
}