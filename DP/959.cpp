#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
    int a[105],i,j,k,l,n,ze=0,on=0,ze1,on1,dif,ma=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            on++;
            else
                ze++;
    }
    ze1=0,on1=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            ze1++;
        else
            on1++;
        for(j=i+1;j<n;j++)
        {
            if(a[j]==0)
            ze1++;
            else
            on1++;
            if(ze1>on1)
            {
            dif=(ze1-on1);
            ma=max(dif,ma);
            }
        }
        ze1=0,on1=0;
    }
    if(ma==0)
    {
        if(ze>=1)
            cout<<on+1<<endl;
        else
        {
            if(on>=1)
                cout<<on-1<<endl;
        }

    }
    else
    cout<<ma+on<<endl;
    return 0;
}