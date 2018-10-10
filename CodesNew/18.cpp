#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double l,a[n],x=0,y=0.0;
    cin>>l;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if((a[i+1]-a[i])>y)
            y=a[i+1]-a[i];
    }
    if((l-a[n-1])>=y/2)
    {

        y=l-a[n-1];
        if(a[0]>=y)
        {
            cout<<a[0];
            return 0;
        }
        else
        {
            cout<<fixed<<setprecision(1)<<y;
            return 0;
        }
    }
    if(a[0]==0)
    {
        cout<<fixed<<setprecision(1)<<y/2;
    }
    else
    {
        if(a[0]>=y/2)
            cout<<a[0];
        else
            cout<<fixed<<setprecision(1)<<y/2;


    }
}
