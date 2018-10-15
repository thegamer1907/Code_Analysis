#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int64_t n,a[500000],count=0,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int64_t ans=n;
    for(i=0,j=n/2;i<n/2&&j<n;j++)
    {
        if(a[i]*2<=a[j])
        {
            i++;
            ans--;
        }
    }
    cout<<ans;
    return 0;
}
