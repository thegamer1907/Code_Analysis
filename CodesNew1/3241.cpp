#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int max,i,n,m,a[100];
    cin>>n;
    cin>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    max=a[n-1];
    for(i=0;i<m;i++)
    {
        a[0]++;
        sort(a,a+n);
    }
    cout<<a[n-1]<<" ";
    cout<<(max+m);
    return 0;
}
