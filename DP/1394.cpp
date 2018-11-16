#include<iostream>
using namespace std;
int main()
{
    int max=0,n,i,sum=0,a[105],p;
    cin>>n;
    p=0;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if (sum==n)
    {
        cout<<sum-1<<endl;
        return 0;
    }
    for (i=0;i<n;i++)
    {
        if (a[i]==0)
            p++;
        else if (a[i]==1&&p<0)
            p=0;
        else if (a[i]==1&&p>0)
            p--;
        if (max<p)
            max=p;
    }
    sum+=max;
    cout<<sum<<endl;
    return 0;
}
