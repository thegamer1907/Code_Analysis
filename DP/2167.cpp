#include<bits/stdc++.h>
using namespace std;
int a[1000009],s[1000009];
int ar[1000009];
main(void)
{
    int n,m,i,j,l;
    int total=0,val;
    cin>>n>>m;
    for(i=0;i<n;i++) cin>>a[i];

    ///pre-calculate
    while(n--)
    {
        if(ar[a[n]]==0)
            total++;
        ar[a[n]]=1;
        a[n]=total;
    }
    ///
    while(m--)
    {
        cin>>l;
        cout<<a[l-1]<<endl;
    }
}
