#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    cin>>a[0];
    int max=a[0],min=0;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        max=a[i];
    }
    max+=m;
    while(m)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]<a[min])
            min=i;
        }
        a[min]++;
        m--;
    }
    int x=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>x)
        x=a[i];
    }
    cout<<x<<" "<<max;
}