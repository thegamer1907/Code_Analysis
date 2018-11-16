#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[100],b[100],dem=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>k;
    for(int i=0;i<k;i++)cin>>b[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
     for(int i=0;i<k-1;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(b[j]<b[i])
            {
                int tg=b[i];
                b[i]=b[j];
                b[j]=tg;
            }
        }
    }
    int m=0;
    for(int i=0;i<n;i++)
    {
        for(int j=m;j<k;j++)
        {
            if(abs(a[i]-b[j])<=1){dem++;
            m=j+1;
            break;}
        }
    }
    cout<<dem;
}
