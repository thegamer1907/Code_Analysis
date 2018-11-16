#include <iostream>
using namespace std;

int main()
    {
    int n,k;
    cin>>n>>k;
    int a[n],x=0;
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
        }
    for (int i=n-1;i>=0;i--)
        {
        if(a[i]>0 && a[i]>=a[k-1])
            x++;
        }
    cout<<x;
    }
