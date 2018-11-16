#include<iostream>
#include<cmath>
using namespace std;
main()
{
    long i,j,a[100],b[100],x,y,cap=0;
    cin>>x;
    for(i=1;i<=x;i++) cin>>a[i];
    for(i=1;i<x;i++)
        for(j=i;j<=x;j++)
        if(a[i]>a[j]) swap(a[i],a[j]);
    cin>>y;
    for(i=1;i<=y;i++) {
            cin>>b[i];
    }
    for(i=1;i<y;i++)
        for(j=i;j<=y;j++)
        if(b[i]>b[j]) swap(b[i],b[j]);
    for(i=1;i<=y;i++)
    for(j=1;j<=x;j++){
                if(abs(a[j]-b[i])<=1){cap++;a[j]=966; break;}
            }
    cout<<cap;

}
