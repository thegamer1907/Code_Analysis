#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int pppp = 1e9 + 7; 
main()
{
    ll t,n,i,j,k,a[200001],s1,s2,s=0;
    map < ll , ll > mpl,mpr;
    cin>>n>>k;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++)
    {
        mpr[a[i]]++;
    }
    for(i=0;i<n;i++)
    {
        mpr[a[i]]--;
        if(a[i]%k==0)
        {
            s1=mpl[a[i]/k];
            s2=mpr[a[i]*k];
            s+=s1*s2;
        }
        mpl[a[i]]++;
    }
    cout<<s<<endl;
}