#include <iostream>
using namespace std;
int main()
{
    int n,k,i,flag=0;
    cin>>n>>k;
    int a[100],f;
    f=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i<k)
        {
            if(a[i]<=0)
                f++;
        }
    }
    i=k;
    while(a[i]==a[k-1] && a[i])
    {
        flag++;
        i++;
    }
    cout<<flag+k-f;
    return 0;
}