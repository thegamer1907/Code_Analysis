#include<iostream>
#include<algorithm>
using namespace std;
int a[105];
int main()
{
    int n,m,mx=0,mi=0;
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]>mx)
        {
            mx=a[i];
        }
        mi+=a[i];
    }
    if(mx*n>=mi+m)
    {
        mi=0;
    }
    else
    {
        mi-=mx*n;
        mi+=m;
        mi=(mi+n-1)/n;
    }
    cout<<mx+mi<<' '<<mx+m;
    return 0;
}
