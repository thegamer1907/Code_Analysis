#include<iostream>
using namespace std;
int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    int x=-1,y=-2;
    int maxdem=-2,dem=0,dem1=0,dem2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int m=i;m<=j;m++)
            {
                if(a[m]==0)dem++;
                else dem1++;
            }
            if(dem-dem1>maxdem)
            {
                maxdem=dem-dem1;
                x=i;
                y=j;
            }
            dem=0;
            dem1=0;
        }
    }
    for(int i=x;i<=y;i++)a[i]=1-a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)dem2++;
    }
    cout<<dem2;
}