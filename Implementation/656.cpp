#include <iostream>

using namespace std;

int main()
{
    int b,j,k,n,l,m,t=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {   if(a[i]>0)
        if(a[k-1]<=a[i])
            t++;
    }
    cout<<t;
}
